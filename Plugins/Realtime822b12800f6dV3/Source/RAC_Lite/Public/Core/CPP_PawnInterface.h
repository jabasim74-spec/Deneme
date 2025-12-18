// Copyright Stanislav Perekupenko 2024. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "UObject/Interface.h"
#include "CPP_PawnInterface.generated.h"

UINTERFACE()
class UCPP_PawnInterface : public UInterface
{
	GENERATED_BODY()
};

class RAC_LITE_API ICPP_PawnInterface
{
	GENERATED_BODY()

public:
	virtual void FBMovement(float _value) { ; }

	virtual void LRMovement(float _value) { ; }
};
