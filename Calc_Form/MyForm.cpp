// Библиотеки 
#include "MyForm.h"

// Упрощение команд
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
// Главная функция
int main(array<String^>^ args)
{
	// Запуск форму
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	CalcForm::MyForm form;
	Application::Run(% form);
}

