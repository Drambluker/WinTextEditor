#include "AboutForm.h"

System::Void TextEditor::AboutForm::censored_label_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (sounds)
		censoredLabelSound->Play();
}

System::Void TextEditor::AboutForm::description_linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
{
	description_linkLabel1->LinkVisited = true;
	Diagnostics::Process::Start("https://www.flaticon.com/authors/freepik");
}

System::Void TextEditor::AboutForm::description_linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
{
	description_linkLabel2->LinkVisited = true;
	Diagnostics::Process::Start("https://www.flaticon.com/");
}

System::Void TextEditor::AboutForm::description_linkLabel3_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
{
	description_linkLabel3->LinkVisited = true;
	Diagnostics::Process::Start("http://creativecommons.org/licenses/by/3.0/");
}