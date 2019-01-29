#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern gameEngine::Application* gameEngine::CreateApplication();

int main(int argc, char** argv)
{

	// create application
	auto app = gameEngine::CreateApplication();

	// run application
	app->Run();

	// free memory before exiting
	delete app;
}

#endif