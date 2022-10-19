void UWebSocketTestMyGameInstance::Init()
{
	//Since we are expanding from the Parent method we want to make sure the stuff in the parent runs
	Super::Init();

	// Sometimes the websocket modules doesn't load by default so adding a if to make sure it does
	if (!FModuleManager::Get().IsModuleLoaded(("WebSockets")))
	{
		FModuleManager::Get().LoadModule("WebSockets");
	}

	// we use port localhost:8080 to run a test node application in the local environment to test out the websocket
	WebSocket = FWebSocketsModule::Get().CreateWebSocket("ws://localhost:8080");

	WebSocket->OnConnected().AddLambda([]()
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, "We Did heheha!!!");
	});

	WebSocket->OnConnectionError().AddLambda([](const FString& Error)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, Error);
	});

	WebSocket->OnClosed().AddLambda([](int32 StatusCode, const FString& Reason, bool bWasClean)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, bWasClean ? FColor::Green : FColor::Red, "Connection closed " + Reason);
	});
	
	WebSocket->Connect();
	
}

void UWebSocketTestMyGameInstance::Shutdown()
{

	if(WebSocket->IsConnected())
	{
		WebSocket->Close();
	}
	Super::Shutdown();
}