#pragma once

#ifdef PRW_PLATFORM_WINDOWS

extern Prawn::App* Prawn::CreateApp();

int main(int argc, char** argv) {
	auto app = Prawn::CreateApp();
	app->Run();
	delete app;
}

#else
	 Windows support only!
#endif // PRW_PLATFORM_WINDOWS
