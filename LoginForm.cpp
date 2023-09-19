#include "LoginForm.h"

using namespace CGUI;

[STAThreadAttribute]

int main() {
	
	Application::Run(gcnew(LoginForm));

	return 0;
}

