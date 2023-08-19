// Fill out your copyright notice in the Description page of Project Settings.


#include "Fountain.h"

// Sets default values
AFountain::AFountain()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//  컴포넌트 생성 ('CreateDefaultSubobject API'라는 특별한 함수)
	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BODY"));
	Water = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WATER"));
	Light = CreateDefaultSubobject<UPointLightComponent>(TEXT("LIGHT"));
	Splash = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SPLASH"));

	// 루트 컴포넌트 지정
	RootComponent = Body;
	Water->SetupAttachment(Body);
	Light->SetupAttachment(Body);
	Splash->SetupAttachment(Body);

	// SetRelativeLocation : 컴포넌트 기본 위치 값 변경 가능
	Water->SetRelativeLocation(FVector(0.0f, 0.0f, 135.0f));
	Light->SetRelativeLocation(FVector(0.0f, 0.0f, 195.0f));
	Splash->SetRelativeLocation(FVector(0.0f, 0.0f, 195.0f));


	// 생성자 코드에서 애셋을 불러오는 기능 : 분수대 몸체=>StaticMash
	static ConstructorHelpers::FObjectFinder<UStaticMesh>
		SM_BODY(TEXT("StaticMesh'/Game/InfinityBladeGrassLands/Environments/Plains/Env_Plains_Ruins/StaticMesh/SM_Plains_Castle_Fountain_01.SM_Plains_Castle_Fountain_01'"));
	
	// SetStaticMesh 함수에 SM_BODY의 포인터 전달
	if (SM_BODY.Succeeded())
	{
		Body->SetStaticMesh(SM_BODY.Object);
	}

	static ConstructorHelpers::FObjectFinder<UStaticMesh>
		SM_WATER(TEXT("StaticMesh'/Game/InfinityBladeGrassLands/Effects/FX_Meshes/Env/SM_Plains_Fountain_02.SM_Plains_Fountain_02'"));

	if (SM_WATER.Succeeded())
	{
		Water->SetStaticMesh(SM_WATER.Object);
	}

	// Splash 효과 => UParticleSystem
	static ConstructorHelpers::FObjectFinder<UParticleSystem>
		PS_SPLASH(TEXT("ParticleSystem'/Game/InfinityBladeGrassLands/Effects/FX_Ambient/Water/P_Water_Fountain_Splash_Base_01.P_Water_Fountain_Splash_Base_01'"));

	// SetTemplate 함수에 PS_SPLASH 포인터 전달
	if (PS_SPLASH.Succeeded())
	{
		Splash->SetTemplate(PS_SPLASH.Object);
	}


}

// Called when the game starts or when spawned
void AFountain::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFountain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

