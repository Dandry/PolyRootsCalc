//#include "stdafx.h"
#include "MainWindow.h"

using namespace PolyRootsCalc;

[STAThreadAttribute]
int main(cli::array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainWindow());
	return 0;
}