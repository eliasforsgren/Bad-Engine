#pragma once

#ifdef BE_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv) {
	printf("Badengine");
	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}
#endif