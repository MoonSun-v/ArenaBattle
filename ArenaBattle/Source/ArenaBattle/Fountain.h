// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/RotatingMovementComponent.h"
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
	
	// ���Ͱ� ���ӿ� ������ �� ������ BeginPlay�Լ� ȣ��
	virtual void BeginPlay() override;

	// ���Ͱ� ���ӿ��� ������ �� EndPlay�Լ� ȣ��
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// ���Ϳ� ���� ��� ������Ʈ ������ �Ϸ�Ǹ� PostInitializeComponents�Լ� ȣ��
	virtual void PostInitializeComponents() override;


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

	UPROPERTY(VisibleAnywhere)
	URotatingMovementComponent* Movement;

	// �Ӽ��� �����͸� �����Ϸ��� EditAnywhere Ű���带 ���
	// UPROPERTY ��ũ�� ���� 'Category = �з���' ��Ģ���� Ű���� �߰��ϸ� 
	// ������ �з����� �Ӽ����� ������ �� �ִ�
	UPROPERTY(EditAnywhere, Category = ID)
	int32 ID;

private:
	UPROPERTY(EditAnywhere, Category = Stat, Meta = (AllowPrivateAccess = true))
	float RotateSpeed;
};
