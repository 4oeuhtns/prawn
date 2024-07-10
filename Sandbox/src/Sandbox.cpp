#include <Prawn.h>

class Sandbox : public Prawn::App {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Prawn::App* Prawn::CreateApp() {
	return new Sandbox();
}