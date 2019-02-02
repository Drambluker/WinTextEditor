#pragma once

#include "AboutForm.h"

namespace TextEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			fileName = L"";
			aboutForm = gcnew TextEditor::AboutForm();
			themes_toolStripComboBox->SelectedIndex = 0;
			//keyDownSound = gcnew Media::SoundPlayer("Sounds/Sound_08670.wav");
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::MenuStrip^  menuStrip;
		System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  saveAsToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  closeToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  undoToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  redoToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  fontsToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  colorToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  fontToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  unicodeToolStripMenuItem;
		System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
		System::Windows::Forms::ToolStripComboBox^  themes_toolStripComboBox;
		System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
		System::Windows::Forms::RichTextBox^  richTextBox;
		System::Windows::Forms::ContextMenuStrip^  contextMenuStrip;
		System::Windows::Forms::ToolStripMenuItem^  context_colorToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  context_fontToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  listToolStripMenuItem;
		System::Windows::Forms::OpenFileDialog^  openFileDialog;
		System::Windows::Forms::SaveFileDialog^  saveFileDialog;
		System::Windows::Forms::ToolStripMenuItem^  soundsToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
		System::Windows::Forms::StatusStrip^  statusStrip;
		System::Windows::Forms::Timer^  timer;
		System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel;
		System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		String ^fileName;
		Windows::Forms::RichTextBoxStreamType streamType;
		TextEditor::AboutForm ^aboutForm;
		//Media::SoundPlayer ^keyDownSound;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->unicodeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->themes_toolStripComboBox = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->soundsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->contextMenuStrip = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->context_colorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->context_fontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->statusStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip->SuspendLayout();
			this->contextMenuStrip->SuspendLayout();
			this->statusStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip
			// 
			this->menuStrip->BackColor = System::Drawing::SystemColors::Control;
			this->menuStrip->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->fontsToolStripMenuItem, this->optionsToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(782, 28);
			this->menuStrip->TabIndex = 0;
			this->menuStrip->Text = L"menuStrip";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->openToolStripMenuItem,
					this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->closeToolStripMenuItem
			});
			this->fileToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fileToolStripMenuItem.Image")));
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(64, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openToolStripMenuItem.Image")));
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(173, 26);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveToolStripMenuItem.Image")));
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->saveToolStripMenuItem->Size = System::Drawing::Size(173, 26);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveAsToolStripMenuItem.Image")));
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(173, 26);
			this->saveAsToolStripMenuItem->Text = L"Save As";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::saveAsToolStripMenuItem_Click);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closeToolStripMenuItem.Image")));
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(173, 26);
			this->closeToolStripMenuItem->Text = L"Close";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::closeToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->undoToolStripMenuItem,
					this->redoToolStripMenuItem
			});
			this->editToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editToolStripMenuItem.Image")));
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// undoToolStripMenuItem
			// 
			this->undoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"undoToolStripMenuItem.Image")));
			this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
			this->undoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->undoToolStripMenuItem->Size = System::Drawing::Size(171, 26);
			this->undoToolStripMenuItem->Text = L"Undo";
			this->undoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::undoToolStripMenuItem_Click);
			// 
			// redoToolStripMenuItem
			// 
			this->redoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"redoToolStripMenuItem.Image")));
			this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
			this->redoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Y));
			this->redoToolStripMenuItem->Size = System::Drawing::Size(171, 26);
			this->redoToolStripMenuItem->Text = L"Redo";
			this->redoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::redoToolStripMenuItem_Click);
			// 
			// fontsToolStripMenuItem
			// 
			this->fontsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->colorToolStripMenuItem,
					this->fontToolStripMenuItem
			});
			this->fontsToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fontsToolStripMenuItem.Image")));
			this->fontsToolStripMenuItem->Name = L"fontsToolStripMenuItem";
			this->fontsToolStripMenuItem->Size = System::Drawing::Size(76, 24);
			this->fontsToolStripMenuItem->Text = L"Fonts";
			// 
			// colorToolStripMenuItem
			// 
			this->colorToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"colorToolStripMenuItem.Image")));
			this->colorToolStripMenuItem->Name = L"colorToolStripMenuItem";
			this->colorToolStripMenuItem->ShortcutKeyDisplayString = L"";
			this->colorToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::C));
			this->colorToolStripMenuItem->Size = System::Drawing::Size(167, 26);
			this->colorToolStripMenuItem->Text = L"Color";
			this->colorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::colorToolStripMenuItem_Click);
			// 
			// fontToolStripMenuItem
			// 
			this->fontToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fontToolStripMenuItem.Image")));
			this->fontToolStripMenuItem->Name = L"fontToolStripMenuItem";
			this->fontToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F));
			this->fontToolStripMenuItem->Size = System::Drawing::Size(167, 26);
			this->fontToolStripMenuItem->Text = L"Font";
			this->fontToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::fontToolStripMenuItem_Click);
			// 
			// optionsToolStripMenuItem
			// 
			this->optionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->unicodeToolStripMenuItem,
					this->toolStripSeparator1, this->themes_toolStripComboBox, this->soundsToolStripMenuItem
			});
			this->optionsToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"optionsToolStripMenuItem.Image")));
			this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
			this->optionsToolStripMenuItem->Size = System::Drawing::Size(93, 24);
			this->optionsToolStripMenuItem->Text = L"Options";
			// 
			// unicodeToolStripMenuItem
			// 
			this->unicodeToolStripMenuItem->CheckOnClick = true;
			this->unicodeToolStripMenuItem->Name = L"unicodeToolStripMenuItem";
			this->unicodeToolStripMenuItem->Size = System::Drawing::Size(187, 26);
			this->unicodeToolStripMenuItem->Text = L"Unicode";
			this->unicodeToolStripMenuItem->CheckedChanged += gcnew System::EventHandler(this, &MainForm::unicodeToolStripMenuItem_CheckedChanged);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(184, 6);
			// 
			// themes_toolStripComboBox
			// 
			this->themes_toolStripComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			this->themes_toolStripComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Light Theme", L"Dark Theme" });
			this->themes_toolStripComboBox->Name = L"themes_toolStripComboBox";
			this->themes_toolStripComboBox->Size = System::Drawing::Size(121, 28);
			this->themes_toolStripComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::themes_toolStripComboBox_SelectedIndexChanged);
			// 
			// soundsToolStripMenuItem
			// 
			this->soundsToolStripMenuItem->CheckOnClick = true;
			this->soundsToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"soundsToolStripMenuItem.Image")));
			this->soundsToolStripMenuItem->Name = L"soundsToolStripMenuItem";
			this->soundsToolStripMenuItem->Size = System::Drawing::Size(187, 26);
			this->soundsToolStripMenuItem->Text = L"Sounds";
			this->soundsToolStripMenuItem->CheckedChanged += gcnew System::EventHandler(this, &MainForm::soundsToolStripMenuItem_CheckedChanged);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aboutToolStripMenuItem.Image")));
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::aboutToolStripMenuItem_Click);
			// 
			// richTextBox
			// 
			this->richTextBox->ContextMenuStrip = this->contextMenuStrip;
			this->richTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox->Location = System::Drawing::Point(0, 28);
			this->richTextBox->Name = L"richTextBox";
			this->richTextBox->Size = System::Drawing::Size(782, 625);
			this->richTextBox->TabIndex = 1;
			this->richTextBox->Text = L"";
			// 
			// contextMenuStrip
			// 
			this->contextMenuStrip->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->context_colorToolStripMenuItem,
					this->context_fontToolStripMenuItem, this->listToolStripMenuItem
			});
			this->contextMenuStrip->Name = L"contextMenuStrip";
			this->contextMenuStrip->Size = System::Drawing::Size(119, 82);
			// 
			// context_colorToolStripMenuItem
			// 
			this->context_colorToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"context_colorToolStripMenuItem.Image")));
			this->context_colorToolStripMenuItem->Name = L"context_colorToolStripMenuItem";
			this->context_colorToolStripMenuItem->Size = System::Drawing::Size(118, 26);
			this->context_colorToolStripMenuItem->Text = L"Color";
			this->context_colorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::context_colorToolStripMenuItem_Click);
			// 
			// context_fontToolStripMenuItem
			// 
			this->context_fontToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"context_fontToolStripMenuItem.Image")));
			this->context_fontToolStripMenuItem->Name = L"context_fontToolStripMenuItem";
			this->context_fontToolStripMenuItem->Size = System::Drawing::Size(118, 26);
			this->context_fontToolStripMenuItem->Text = L"Font";
			this->context_fontToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::context_fontToolStripMenuItem_Click);
			// 
			// listToolStripMenuItem
			// 
			this->listToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"listToolStripMenuItem.Image")));
			this->listToolStripMenuItem->Name = L"listToolStripMenuItem";
			this->listToolStripMenuItem->Size = System::Drawing::Size(118, 26);
			this->listToolStripMenuItem->Text = L"List";
			this->listToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::listToolStripMenuItem_Click);
			// 
			// openFileDialog
			// 
			this->openFileDialog->Filter = L"RTF files(*.rtf)|*.rtf|Text files(*.txt)|*.txt|All files(*.*)|*.*";
			// 
			// saveFileDialog
			// 
			this->saveFileDialog->Filter = L"RTF files(*.rtf)|*.rtf|Text files(*.txt)|*.txt|All files(*.*)|*.*";
			// 
			// statusStrip
			// 
			this->statusStrip->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel });
			this->statusStrip->Location = System::Drawing::Point(0, 628);
			this->statusStrip->Name = L"statusStrip";
			this->statusStrip->Size = System::Drawing::Size(782, 25);
			this->statusStrip->TabIndex = 0;
			this->statusStrip->Text = L"statusStrip";
			this->statusStrip->Visible = false;
			// 
			// toolStripStatusLabel
			// 
			this->toolStripStatusLabel->Name = L"toolStripStatusLabel";
			this->toolStripStatusLabel->Size = System::Drawing::Size(117, 20);
			this->toolStripStatusLabel->Text = L"FILE HAS SAVED";
			// 
			// timer
			// 
			this->timer->Interval = 3000;
			this->timer->Tick += gcnew System::EventHandler(this, &MainForm::timer_Tick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 653);
			this->Controls->Add(this->statusStrip);
			this->Controls->Add(this->richTextBox);
			this->Controls->Add(this->menuStrip);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip;
			this->Name = L"MainForm";
			this->Text = L"Text Editor";
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->contextMenuStrip->ResumeLayout(false);
			this->statusStrip->ResumeLayout(false);
			this->statusStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e); //
		System::Void saveAsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void closeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void undoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void redoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void colorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void fontToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void unicodeToolStripMenuItem_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
		System::Void themes_toolStripComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
		System::Void soundsToolStripMenuItem_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
		System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		//System::Void richTextBox_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e);
		System::Void context_colorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void context_fontToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void listToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e);
	};
}