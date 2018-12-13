#include <Windows.h>
#include "Needle.h"
#include "ThreadTable.h"
#include "GeneralForm.h"

using namespace ThreadNeedlePi;
using namespace System;
using namespace System::Windows::Forms;

#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

[STAThread]
int main(array<System::String ^> ^args)
//int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, char*, int nShowCmd)

{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// �������� �������� ���� � ��� ������
	GeneralForm^ form = gcnew GeneralForm();
	Application::Run(form);

	return 0;
}