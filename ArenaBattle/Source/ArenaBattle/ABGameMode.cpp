// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGameMode.h"
#include "ABPawn.h"
#include "ABPlayerController.h"

// ����: ���� �����ϰ� �����ϴ� ���� �ƴ϶�, Ŭ���� ������ ������
// ��Ƽ�� ����Ѵٸ�, �̸� ���� �����δ� ���� �ƴ϶� Ŭ���� ������ ����, �÷��̾� ���� �� �����ϴ� ���� �ո���
AABGameMode::AABGameMode()
{
	// �𸮾� ������Ʈ�� Ŭ���� ������ �𸮾� ��� ���� ���� �ڵ����� ����, StaticClass() �Լ� ȣ���� ������
	DefaultPawnClass = AABPawn::StaticClass();
	PlayerControllerClass = AABPlayerController::StaticClass();
}

void AABGameMode::PostLogin(APlayerController* NewPlayer)
{
	ABLOG(Warning, TEXT("PostLogin"));
	Super::PostLogin(NewPlayer);
	ABLOG(Warning, TEXT("PostLogin End"));
}