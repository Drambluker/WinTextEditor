#include "MainForm.h"

System::Void TextEditor::MainForm::openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (openFileDialog->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		fileName = String::Copy(openFileDialog->FileName);

		if (openFileDialog->FilterIndex == 1)
		{
			unicodeToolStripMenuItem->Visible = false;
			unicodeToolStripMenuItem->Checked = false;
			streamType = Windows::Forms::RichTextBoxStreamType::RichText;
		}
		else
		{
			unicodeToolStripMenuItem->Visible = true;

			if (unicodeToolStripMenuItem->Checked)
				streamType = Windows::Forms::RichTextBoxStreamType::UnicodePlainText;
			else
				streamType = Windows::Forms::RichTextBoxStreamType::PlainText;
		}

		richTextBox->LoadFile(fileName, streamType);
		this->Text = fileName + L" - Text Editor";
	}
}

System::Void TextEditor::MainForm::saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (!String::IsNullOrEmpty(fileName))
	{
		richTextBox->SaveFile(fileName, streamType);
		statusStrip->Visible = true;
		timer->Start();
	}
	else
		if (saveFileDialog->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			fileName = String::Copy(saveFileDialog->FileName);

			if (saveFileDialog->FilterIndex == 1)
			{
				unicodeToolStripMenuItem->Visible = false;
				unicodeToolStripMenuItem->Checked = false;
				streamType = Windows::Forms::RichTextBoxStreamType::RichText;
			}
			else
			{
				unicodeToolStripMenuItem->Visible = true;

				if (unicodeToolStripMenuItem->Checked)
					streamType = Windows::Forms::RichTextBoxStreamType::UnicodePlainText;
				else
					streamType = Windows::Forms::RichTextBoxStreamType::PlainText;
			}

			richTextBox->SaveFile(fileName, streamType);
			this->Text = fileName + L" - Text Editor";
			statusStrip->Visible = true;
			timer->Start();
		}
}

System::Void TextEditor::MainForm::saveAsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (saveFileDialog->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		fileName = String::Copy(saveFileDialog->FileName);

		if (saveFileDialog->FilterIndex == 1)
		{
			unicodeToolStripMenuItem->Visible = false;
			unicodeToolStripMenuItem->Checked = false;
			streamType = Windows::Forms::RichTextBoxStreamType::RichText;
		}
		else
		{
			unicodeToolStripMenuItem->Visible = true;

			if (unicodeToolStripMenuItem->Checked)
				streamType = Windows::Forms::RichTextBoxStreamType::UnicodePlainText;
			else
				streamType = Windows::Forms::RichTextBoxStreamType::PlainText;
		}

		richTextBox->SaveFile(saveFileDialog->FileName, streamType);
		this->Text = fileName + L" - Text Editor";
		statusStrip->Visible = true;
		timer->Start();
	}
}

System::Void TextEditor::MainForm::closeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	Application::Exit();
}

System::Void TextEditor::MainForm::undoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	richTextBox->Undo();
}

System::Void TextEditor::MainForm::redoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	richTextBox->Redo();
}

System::Void TextEditor::MainForm::colorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	ColorDialog ^colorDialog = gcnew ColorDialog;
	colorDialog->AllowFullOpen = false;
	colorDialog->Color = richTextBox->ForeColor;

	if (colorDialog->ShowDialog() == Windows::Forms::DialogResult::OK)
		richTextBox->ForeColor = colorDialog->Color;
}

System::Void TextEditor::MainForm::fontToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	FontDialog ^fontDialog = gcnew FontDialog;
	fontDialog->ShowColor = true;
	fontDialog->Font = richTextBox->Font;
	fontDialog->Color = richTextBox->ForeColor;

	if (fontDialog->ShowDialog() != Windows::Forms::DialogResult::Cancel)
	{
		richTextBox->Font = fontDialog->Font;
		richTextBox->ForeColor = fontDialog->Color;
	}
}

System::Void TextEditor::MainForm::unicodeToolStripMenuItem_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if (!String::IsNullOrEmpty(fileName))
		if (streamType != Windows::Forms::RichTextBoxStreamType::RichText)
		{
			if (unicodeToolStripMenuItem->Checked)
				streamType = Windows::Forms::RichTextBoxStreamType::UnicodePlainText;
			else
				streamType = Windows::Forms::RichTextBoxStreamType::PlainText;

			richTextBox->LoadFile(fileName, streamType);
		}
}

System::Void TextEditor::MainForm::themes_toolStripComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	if (themes_toolStripComboBox->SelectedIndex == 0)
	{
		menuStrip->BackColor = System::Drawing::Color::FromArgb(255, 240, 240, 240);
		richTextBox->BackColor = System::Drawing::Color::FromArgb(255, 255, 255, 255);
	}
	else
	{
		menuStrip->BackColor = System::Drawing::Color::FromArgb(255, 105, 105, 105);
		richTextBox->BackColor = System::Drawing::Color::FromArgb(255, 160, 160, 160);
	}
}

System::Void TextEditor::MainForm::soundsToolStripMenuItem_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if (aboutForm->Created)
		aboutForm->sounds = soundsToolStripMenuItem->Checked;
}

System::Void TextEditor::MainForm::aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (!aboutForm->Created)
	{
		aboutForm = gcnew TextEditor::AboutForm();
		aboutForm->sounds = soundsToolStripMenuItem->Checked;
		aboutForm->Show(this);
	}
}

//System::Void TextEditor::MainForm::richTextBox_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
//{
//	if (soundsToolStripMenuItem->Checked)
//		keyDownSound->Play();
//}

System::Void TextEditor::MainForm::context_colorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	ColorDialog ^colorDialog = gcnew ColorDialog;
	colorDialog->AllowFullOpen = false;
	colorDialog->Color = richTextBox->SelectionColor;

	if (colorDialog->ShowDialog() == Windows::Forms::DialogResult::OK)
		richTextBox->SelectionColor = colorDialog->Color;
}

System::Void TextEditor::MainForm::context_fontToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	FontDialog ^fontDialog = gcnew FontDialog;
	fontDialog->ShowColor = true;
	fontDialog->Font = richTextBox->SelectionFont;
	fontDialog->Color = richTextBox->SelectionColor;

	if (fontDialog->ShowDialog() != Windows::Forms::DialogResult::Cancel)
	{
		richTextBox->SelectionFont = fontDialog->Font;
		richTextBox->SelectionColor = fontDialog->Color;
	}
}

System::Void TextEditor::MainForm::listToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	richTextBox->SelectionBullet = !richTextBox->SelectionBullet;
}

System::Void TextEditor::MainForm::timer_Tick(System::Object^  sender, System::EventArgs^  e)
{
	timer->Stop();
	statusStrip->Visible = false;
}