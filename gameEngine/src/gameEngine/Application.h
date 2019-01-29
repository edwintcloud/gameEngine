#pragma once

#include "Core.h"

namespace gameEngine {

	class GAME_ENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Will be defined in the client
	Application* CreateApplication();
}

