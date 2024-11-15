#pragma once
#include "Application.h"

#ifdef D_PLATFORM_WINDOWS

extern Dope::Application* Dope::CreateApplication();

int main(int argc, char** argv) {
	printf("Dope Engine");
	auto app = Dope::CreateApplication();
	app->Run();
	delete app;
}
#else
	#error Dope Ony Supports Windows
#endif // D_PLATFORM_WINDOWS
