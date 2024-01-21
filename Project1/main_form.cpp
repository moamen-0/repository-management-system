#include "chem_form.h"

//#include "edit_form.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Drawing;
using namespace System::Data;

[STAThread]

void main(array<String^>^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	
	//frm.ShowDialog();
	
	Project1::chem_form cfrm;
	//Project1::customersform csf;

	Application::Run(% cfrm);

	
	
}
