// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "UObject/Interface.h"
#include "CPP_ClickInterface.generated.h"

UINTERFACE(BlueprintType)
class UCPP_ClickInterface : public UInterface
{
	GENERATED_BODY()
};

class RAC_LITE_API ICPP_ClickInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Click")
	void Click(const FHitResult& HitResult);
};
