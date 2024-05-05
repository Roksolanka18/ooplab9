#include <iostream>
#include "MyForm.h"
#include <Windows.h>
using namespace System;
using namespace System::Windows::Forms;
using namespace ooplab9progslr;

[STAThreadAttribute]
int main(array<String^>^ args)
{
  Application::SetCompatibleTextRenderingDefault(false);
  ooplab9progslr::MyForm form;
  Application::Run(% form);
  return 0;
}