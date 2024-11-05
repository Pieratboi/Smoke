#pragma once

#include "Core.h"

namespace Smoke {

	class SMOKE_API Application
	{
	public:

		Application();
		virtual ~Application();

		void Run();

	};

	// To be defined in CLIENT
	Application* CreateApplication();

}

