#pragma once


#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "InfluxDBUnrealClient.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class INFLUXDBTOOLS_API UInfluxDBUnrealClient : public UActorComponent
{
	GENERATED_UCLASS_BODY()

public:

	UInfluxDBUnrealClient();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString UrlAddressAsString = "http://165.227.123.141:8086/write?db=unrealanalytics";

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		TArray<FString> LineProtocolBuffer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bPrintDebugToLog = false;

	UFUNCTION(BlueprintCallable)
		void AddToLineProtocolBuffer(FString line);

	UFUNCTION(BlueprintCallable)
		void DumpLineProtocolBufferToDatabase();

	UFUNCTION(BlueprintCallable)
		static FString ConvertTransformToLineProtocol(FTransform transform, FString label, bool bIncludeLocation = true, bool bIncludeRotation = true, bool bIncludeScale = true);

	UFUNCTION(BlueprintCallable)
		static FString BuildLineProtocol(FString label, FString values);

	UFUNCTION(BlueprintCallable)
		void BuildAndAddLineProtocolToBuffer(FString label, FString values);

	UFUNCTION(BlueprintCallable)
		void PostLineProtocolToInfluxDBServer(FString lines);

	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

};
