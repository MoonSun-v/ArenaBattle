// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "Fountain.generated.h"

UCLASS()
class ARENABATTLE_API AFountain : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFountain();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// VisibleAnywhere : 디테일 윈도우에서 속성 편집 가능
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Body;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Water;

	UPROPERTY(VisibleAnywhere)
	UPointLightComponent* Light;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* Splash;

	// 속성의 데이터를 변경하려면 EditAnywhere 키워드를 사용
	// UPROPERTY 매크로 내에 'Category = 분류명' 규칙으로 키워드 추가하면 
	// 지정한 분류에서 속성값을 관리할 수 있다
	UPROPERTY(EditAnywhere, Category = ID)
	int32 ID;
};
