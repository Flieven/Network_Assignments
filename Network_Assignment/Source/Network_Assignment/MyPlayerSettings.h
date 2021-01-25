// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/DataAsset.h"
#include "MyPlayerSettings.generated.h"

UCLASS()
class NETWORK_ASSIGNMENT_API UMyPlayerSettings : public UDataAsset
{
	GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Category = Movement)
        float Acceleration = 500.f;

    UPROPERTY(EditAnywhere, Category = Movement, meta = (DisplayName = "TurnSpeed"))
        float TurnSpeedDefault = 2000.0f;

    UPROPERTY(EditAnywhere, Category = Movement)
        float MaxVelocity = 2000.0f;

    UPROPERTY(EditAnywhere, Category = Movement, meta = (ClampMin = 0.0, ClampMax = 1.0))
        float Friction = 0.75f;

    UPROPERTY(EditAnywhere, Category = Movement, meta = (ClampMin = 0.0, ClampMax = 1.0))
        float BrakingFriction = 0.0001f;

    UPROPERTY(EditAnywhere, Category = Weapon)
        float FireCooldown = 5.0f;

    UPROPERTY(EditAnywhere, Category = Player)
        float Health = 100.0f;
};
