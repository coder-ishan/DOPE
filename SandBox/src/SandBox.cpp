#include <Dope.h>


class Sandbox : public Dope::Application
{
public :
	Sandbox() {

	}
	~Sandbox() {

	}
};

Dope :: Application* Dope::CreateApplication()
{
	return new Sandbox();
}
