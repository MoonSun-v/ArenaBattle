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

	// VisibleAnywhere : ������ �����쿡�� �Ӽ� ���� ����
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Body;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Water;

	UPROPERTY(VisibleAnywhere)
	UPointLightComponent* Light;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* Splash;

	// �Ӽ��� �����͸� �����Ϸ��� EditAnywhere Ű���带 ���
	// UPROPERTY ��ũ�� ���� 'Category = �з���' ��Ģ���� Ű���� �߰��ϸ� 
	// ������ �з����� �Ӽ����� ������ �� �ִ�
	UPROPERTY(EditAnywhere, Category = ID)
	int32 ID;
};
