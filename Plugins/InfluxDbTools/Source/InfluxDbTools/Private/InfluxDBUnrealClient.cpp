#include "InfluxDBUnrealClient.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include <chrono>

using namespace std::chrono;

UInfluxDBUnrealClient::UInfluxDBUnrealClient(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer)
{

}

// Sets default values for this component's properties
UInfluxDBUnrealClient::UInfluxDBUnrealClient()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UInfluxDBUnrealClient::BeginPlay()
{
	Super::BeginPlay();

	// ...

}


// Called every frame
void UInfluxDBUnrealClient::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInfluxDBUnrealClient::AddToLineProtocolBuffer(FString string)
{
	LineProtocolBuffer.Add(string);
}

void UInfluxDBUnrealClient::DumpLineProtocolBufferToDatabase()
{
	FString lines = FString::Join(LineProtocolBuffer, TEXT("\n"));
	LineProtocolBuffer.Empty();
	PostLineProtocolToInfluxDBServer(lines);
}

FString UInfluxDBUnrealClient::ConvertTransformToLineProtocol(FTransform transform, FString label, bool bIncludeLocation, bool bIncludeRotation, bool bIncludeScale)
{
	char location_buffer[512] = { 0 };
	char rotation_buffer[512] = { 0 };
	char scale3d_buffer[512] = { 0 };

	if (bIncludeLocation)
	{
		auto n = sprintf(location_buffer, "location_x=%f,location_y=%f,location_z=%f",
			transform.GetLocation().X,
			transform.GetLocation().Y,
			transform.GetLocation().Z);
	}
	if (bIncludeRotation)
	{
		auto n = sprintf(rotation_buffer, "rotation_x=%f,rotation_y=%f,rotation_z=%f,rotation_w=%f",
			transform.GetRotation().X,
			transform.GetRotation().Y,
			transform.GetRotation().Z,
			transform.GetRotation().W);
	}
	if (bIncludeScale)
	{
		auto n = sprintf(scale3d_buffer, "scale_x=%f,scale_y=%f,scale_z=%f",
			transform.GetScale3D().X,
			transform.GetScale3D().Y,
			transform.GetScale3D().Z);
	}
	TArray<FString> values;
	if (strlen(location_buffer) > 0)
	{
		values.Add(FString(ANSI_TO_TCHAR(location_buffer)));
	}
	if (strlen(rotation_buffer) > 0)
	{
		values.Add(FString(ANSI_TO_TCHAR(rotation_buffer)));
	}
	if (strlen(scale3d_buffer) > 0)
	{
		values.Add(FString(ANSI_TO_TCHAR(scale3d_buffer)));
	}
	nanoseconds now = duration_cast <nanoseconds>(system_clock::now().time_since_epoch());
	FString fs = label + TEXT(" ") + FString::Join(values, TEXT(",")) + TEXT(" ") + FString::Printf(TEXT("%llu"), now.count());
	return fs;
}

FString UInfluxDBUnrealClient::BuildLineProtocol(FString label, FString values)
{
	return label + " " + values;
}

void UInfluxDBUnrealClient::BuildAndAddLineProtocolToBuffer(FString label, FString values)
{
	AddToLineProtocolBuffer(label + " " + values);
}

void UInfluxDBUnrealClient::PostLineProtocolToInfluxDBServer(FString lines)
{
	int now = FDateTime::Now().ToUnixTimestamp();
	TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
	if (bPrintDebugToLog)
	{
		UE_LOG(LogTemp, Warning, TEXT("Posting %s to %s"), *lines, *UrlAddressAsString);
		HttpRequest->OnProcessRequestComplete().BindUObject(this, &UInfluxDBUnrealClient::OnResponseReceived);
	}
	HttpRequest->SetURL(*FString::Printf(TEXT("%s"), *UrlAddressAsString));
	HttpRequest->SetVerb("POST");
	HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
	HttpRequest->SetHeader("Content-Type", TEXT("application/x-www-form-urlencoded"));
	HttpRequest->SetContentAsString(lines);
	HttpRequest->ProcessRequest();
}

void UInfluxDBUnrealClient::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (bWasSuccessful)
	{
		UE_LOG(LogTemp, Warning, TEXT("SUCCESS! RESPONSE IS %s"), *Response->GetContentAsString());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("FAIL!"));
	}
}


