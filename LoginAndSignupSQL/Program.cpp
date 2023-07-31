#include "LoginForm.h"
#include "Dashboard.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LoginAndSignupSQL::LoginForm loginForm;

	loginForm.ShowDialog();
	User^ user = loginForm.user;

	if (user != nullptr) {
		LoginAndSignupSQL::Dashboard Dashboard(user);
		Application::Run(% Dashboard);
	}

	else {
		MessageBox::Show("Authentication Canceled ", "Main.cpp", MessageBoxButtons::OK);
	}
}
