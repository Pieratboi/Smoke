#include <Smoke.h>

class Sandbox : public Smoke::Application
{
public:

	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Smoke::Application* Smoke::CreateApplication()
{
	return new Sandbox();
}