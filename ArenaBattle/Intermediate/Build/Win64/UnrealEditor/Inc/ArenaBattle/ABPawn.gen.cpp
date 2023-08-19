// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/ABPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABPawn() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABPawn_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void AABPawn::StaticRegisterNativesAABPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABPawn);
	UClass* Z_Construct_UClass_AABPawn_NoRegister()
	{
		return AABPawn::StaticClass();
	}
	struct Z_Construct_UClass_AABPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ABPawn.h" },
		{ "ModuleRelativePath", "ABPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AABPawn_Statics::ClassParams = {
		&AABPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AABPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AABPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AABPawn()
	{
		if (!Z_Registration_Info_UClass_AABPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABPawn.OuterSingleton, Z_Construct_UClass_AABPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AABPawn.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<AABPawn>()
	{
		return AABPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABPawn);
	struct Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_ABPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_ABPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AABPawn, AABPawn::StaticClass, TEXT("AABPawn"), &Z_Registration_Info_UClass_AABPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABPawn), 2781154658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_ABPawn_h_2443560047(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_ABPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_ABPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
