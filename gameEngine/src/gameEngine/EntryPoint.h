#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern gameEngine::Application* gameEngine::CreateApplication();

int main(int argc, char** argv)
{

	// initialize logger
	gameEngine::Log::Init();

	// test logger
	GE_CORE_WARN("Initialized Log!");
	int a = 5;
	GE_INFO("Hello! Var-{0}", a);

	// create application
	auto app = gameEngine::CreateApplication();

	// run application
	app->Run();

	// free memory before exiting
	delete app;
}

#endif