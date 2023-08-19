// Fill out your copyright notice in the Description page of Project Settings.


#include "Fountain.h"

// Sets default values
AFountain::AFountain()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//  ������Ʈ ���� ('CreateDefaultSubobject API'��� Ư���� �Լ�)
	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BODY"));
	Water = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WATER"));
	Light = CreateDefaultSubobject<UPointLightComponent>(TEXT("LIGHT"));
	Splash = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SPLASH"));
	Movement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("MOVEMENT"));

	// ��Ʈ ������Ʈ ����
	RootComponent = Body;
	Water->SetupAttachment(Body);
	Light->SetupAttachment(Body);
	Splash->SetupAttachment(Body);

	// SetRelativeLocation : ������Ʈ �⺻ ��ġ �� ���� ����
	Water->SetRelativeLocation(FVector(0.0f, 0.0f, 135.0f));
	Light->SetRelativeLocation(FVector(0.0f, 0.0f, 195.0f));
	Splash->SetRelativeLocation(FVector(0.0f, 0.0f, 195.0f));


	// ������ �ڵ忡�� �ּ��� �ҷ����� ��� : �м��� ��ü=>StaticMash
	static ConstructorHelpers::FObjectFinder<UStaticMesh>
		SM_BODY(TEXT("StaticMesh'/Game/InfinityBladeGrassLands/Environments/Plains/Env_Plains_Ruins/StaticMesh/SM_Plains_Castle_Fountain_01.SM_Plains_Castle_Fountain_01'"));
	
	// SetStaticMesh �Լ��� SM_BODY�� ������ ����
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

	// Splash ȿ�� => UParticleSystem
	static ConstructorHelpers::FObjectFinder<UParticleSystem>
		PS_SPLASH(TEXT("ParticleSystem'/Game/InfinityBladeGrassLands/Effects/FX_Ambient/Water/P_Water_Fountain_Splash_Base_01.P_Water_Fountain_Splash_Base_01'"));

	// SetTemplate �Լ��� PS_SPLASH ������ ����
	if (PS_SPLASH.Succeeded())
	{
		Splash->SetTemplate(PS_SPLASH.Object);
	}

	// �м��� ȸ�� �⺻��
	RotateSpeed = 30.0f;
	Movement->RotationRate = FRotator(0.0f, RotateSpeed, 0.0f);

}

// Called when the game starts or when spawned
void AFountain::BeginPlay()
{
	Super::BeginPlay();

	ABLOG_S(Warning);
	ABLOG(Warning, TEXT("Actor Name : %s, ID: %d, Location X : %.3f"), *GetName(), ID, GetActorLocation().X);

}

// Called every frame
void AFountain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// z���� ��������(������) Fountain ���� ȸ��
	// ������ Ÿ�� ���� DeltaTime�� Ȱ���� �ʴ� ������ �ӵ��� �м��� ȸ��
	AddActorLocalRotation(FRotator(0.0f, RotateSpeed * DeltaTime, 0.0f));
}

void AFountain::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	ABLOG_S(Warning);
}

void AFountain::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	ABLOG_S(Warning);
}
