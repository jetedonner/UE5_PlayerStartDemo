//
//  PSWorldSettingsBase.h
//  UE4_PlayerStartDemo
//
//  Created by Kim David Hauser on 22.03.22.
//  Copyright (c.) 2022 kimhauser.ch, DaVe Inc. (Kim David Hauser) - All rights reserved.
//

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "PSWorldSettingsBase.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(DaVeLog, Log, All);

UCLASS()
class PSWORLDSETTINGS_API APSWorldSettingsBase : public AWorldSettings
{
    GENERATED_BODY()
    
public:
    APSWorldSettingsBase();
    APSWorldSettingsBase(const FObjectInitializer& ObjectInitializer);
    
protected:
    virtual void BeginPlay() override;
    
public:
    
    UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category="PlayerStart", meta=(AllowPrivateAccess = "true"))
    FString DefaultPlayerStartTag;

};
