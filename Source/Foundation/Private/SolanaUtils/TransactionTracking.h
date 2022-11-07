
#pragma once

#include "CoreMinimal.h"

#include "Interfaces/IHttpRequest.h"

DECLARE_DELEGATE_OneParam(RequestCallback, FJsonObject&);
DECLARE_DELEGATE_OneParam(RequestErrorCallback, const FText& FailureReason);

typedef TFunctionRef<void(FJsonObject&)> RequestCB;

struct FOUNDATION_API FRequestData
{
	FRequestData() {}
	FRequestData(UINT id) { Id = id; }

	UINT Id;
	FString Body;
	TSharedPtr<FJsonObject> Response;
	RequestCallback Callback;
	RequestErrorCallback ErrorCallback;
};

class FOUNDATION_API FRequestManager
{
public:

	static int64 GetNextTransactionID();
	static int64 GetLastTransactionID();

	static void SendRequest(FRequestData* RequestData);

	static void CancelRequest(FRequestData* RequestData);

private:

	static void OnResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bSuccess);
};
