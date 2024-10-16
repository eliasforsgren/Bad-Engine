#pragma once
#include "core.h"

namespace Engine {

	class Badengine_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//Defined in client
	Application* CreateApplication();

}

