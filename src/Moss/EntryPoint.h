#pragma once

#ifdef MS_PLATFORM_WINDOWS

extern Moss::Application* Moss::CreateApplication();

int main(int argc, char** argv)
{
	printf("Moss Engine!\n");
	auto app = Moss::CreateApplication();
	app->Run();
	delete app;
}

#endif

