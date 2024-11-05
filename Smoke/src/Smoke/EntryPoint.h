#pragma once

#ifdef SMK_PLATFORM_WINDOWS

extern Smoke::Application* Smoke::CreateApplication();

int main(int argc, char** argv[])
{
	auto app = Smoke::CreateApplication();
	app->Run();
	delete app;
}

#endif