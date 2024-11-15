#pragma once
#include "Core.h"

namespace Dope {

	class DOPE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};
	//To be defined in CLIENT
	Application* CreateApplication();
	
}


