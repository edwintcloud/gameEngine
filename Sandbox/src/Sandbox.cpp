#include <gameEngine.h>

class Sandbox : public gameEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

gameEngine::Application* gameEngine::CreateApplication()
{
	return new Sandbox();
}