#include "MyForm.h"
using namespace System::Windows::Forms;
using namespace System;
[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Shahki::MyForm form;
	Application::Run(%form);
}
