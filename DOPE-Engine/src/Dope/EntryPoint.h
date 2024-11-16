#pragma once
#include "Dope.h"


#ifdef D_PLATFORM_WINDOWS

extern Dope::Application* Dope::CreateApplication();

int main(int argc, char** argv) {
	Dope::Log::Init();
	D_CORE_WARN("Initialized Log");
	D_INFO("Hello");

	printf("Dope Engine");
	auto app = Dope::CreateApplication();
	app->Run();
	delete app;
}
#else
	#error Dope Ony Supports Windows
#endif // D_PLATFORM_WINDOWS
