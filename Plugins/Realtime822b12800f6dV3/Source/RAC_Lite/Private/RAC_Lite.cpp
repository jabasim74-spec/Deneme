// Copyright Stanislav Perekupenko 2024. All Rights Reserved.

#include "RAC_Lite.h"

#define LOCTEXT_NAMESPACE "FRAC_LiteModule"

void FRAC_LiteModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FRAC_LiteModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FRAC_LiteModule, RAC_Lite)