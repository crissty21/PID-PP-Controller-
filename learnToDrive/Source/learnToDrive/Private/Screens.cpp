// Fill out your copyright notice in the Description page of Project Settings.


#include "Screens.h"


// Sets default values for this component's properties
UScreens::UScreens()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ensure the root component exists

	//Camera = CreateDefaultSubobject<USceneCaptureComponent2D>("Camera");
	//Camera->AddToRoot();


	VideoSize = FVector2D(256, 256);
	RefreshRate = 30.0f;
}


// Called when the game starts
void UScreens::BeginPlay()
{
	Super::BeginPlay();
	// Prepare the color data array
	ColorData.AddDefaulted(VideoSize.X * VideoSize.Y);
	// setup openCV 
	// 
	// 
	// 
	//cvSize = cv::Size(VideoSize.X, VideoSize.Y);
	//cvMat = new cv::Mat(cvSize, CV_8UC4, ColorData.GetData());

	// create dynamic texture
	Camera_Texture2D = UTexture2D::CreateTransient(VideoSize.X, VideoSize.Y, PF_B8G8R8A8);

#if WITH_EDITORONLY_DATA
	Camera_Texture2D->MipGenSettings = TMGS_NoMipmaps;
#endif
	Camera_Texture2D->SRGB = Camera_RenderTarget->SRGB;

	if (Camera_RenderTarget)
		RenderTarget = Camera_RenderTarget->GameThread_GetRenderTargetResource();
	else
		UE_LOG(LogTemp, Fatal, TEXT("Camera Render Target not set"));

}


// Called every frame
void UScreens::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	RefreshTimer += DeltaTime;
	//extrem de bizar este faptul ca daca executam citirea de pixeli mai rar, avem mare frame drop
	// Read the pixels from the RenderTarget and store them in a FColor array

	bool succesfull;
	if (RenderTarget)
	{
		succesfull = RenderTarget->ReadPixels(ColorData);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("renderTarget invalid"));
		succesfull = false;
	}
	if (succesfull)
	{
		if (RefreshTimer >= 1.0f / RefreshRate) {
			RefreshTimer -= 1.0f / RefreshRate;
			ReadFrame();
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to read render target"));
	}
}
void UScreens::ReadFrame()
{

	//cv::Mat* colorData = new cv::Mat(cvSize, CV_8UC4, ColorData.GetData());
	//colorData->convertTo(*colorData, -1, 1, 0);
	//const int32 TextureDataSize = colorData->size().width * colorData->size().height * 4 * sizeof(uint8);

	// Lock the texture so we can read / write to it
	// set the texture data
	/*
	void* TextureData = PlayerControllerRef->Texture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);

	//FMemory::Memcpy(TextureData, cvMat.data, TextureDataSize);
	FMemory::ParallelMemcpy(TextureData, colorData->data, TextureDataSize);

	// Unlock the texture
	PlayerControllerRef->Texture->PlatformData->Mips[0].BulkData.Unlock();
	// Apply Texture changes to GPU memory
	PlayerControllerRef->Texture->UpdateResource();
	Camera_Texture2D = PlayerControllerRef->Texture;
	PlayerControllerRef->UpdateTexture();
	//PlayerControllerRef->Texture = Camera_Texture2D;
	//pass this to MyHUD
	/*
	AMyHUD* hud = Cast<AMyHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD());
	if (hud)
	{
		hud->DrawTexture(texture, 10, 10, 256, 256, 1, 1, 256, 256);
	}*/

	//how to change texture to a image on a hud
	//update brush via texture on a image in a widget class

}


