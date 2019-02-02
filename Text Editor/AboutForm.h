#pragma once

namespace TextEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AboutForm
	/// </summary>
	public ref class AboutForm : public System::Windows::Forms::Form
	{
	public:
		bool sounds;

		AboutForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			censoredLabelSound = gcnew Media::SoundPlayer("Sounds/MGK_Oh_Shit.wav");
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AboutForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::PictureBox^  android_pictureBox;
		System::Windows::Forms::Label^  censored_label;
		System::Windows::Forms::Label^  description_label1;
		System::Windows::Forms::LinkLabel^  description_linkLabel1;
		System::Windows::Forms::Label^  description_label2;
		System::Windows::Forms::LinkLabel^  description_linkLabel2;
		System::Windows::Forms::Label^  description_label3;
		System::Windows::Forms::LinkLabel^  description_linkLabel3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		Media::SoundPlayer ^censoredLabelSound;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutForm::typeid));
			this->android_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->censored_label = (gcnew System::Windows::Forms::Label());
			this->description_label1 = (gcnew System::Windows::Forms::Label());
			this->description_linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->description_label2 = (gcnew System::Windows::Forms::Label());
			this->description_linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->description_label3 = (gcnew System::Windows::Forms::Label());
			this->description_linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->android_pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// android_pictureBox
			// 
			this->android_pictureBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->android_pictureBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->android_pictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"android_pictureBox.Image")));
			this->android_pictureBox->Location = System::Drawing::Point(0, 0);
			this->android_pictureBox->Name = L"android_pictureBox";
			this->android_pictureBox->Size = System::Drawing::Size(589, 507);
			this->android_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->android_pictureBox->TabIndex = 0;
			this->android_pictureBox->TabStop = false;
			// 
			// censored_label
			// 
			this->censored_label->BackColor = System::Drawing::Color::Black;
			this->censored_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->censored_label->ForeColor = System::Drawing::Color::White;
			this->censored_label->Location = System::Drawing::Point(162, 348);
			this->censored_label->Name = L"censored_label";
			this->censored_label->Size = System::Drawing::Size(270, 55);
			this->censored_label->TabIndex = 1;
			this->censored_label->Text = L"CENSORED";
			this->censored_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->censored_label->Click += gcnew System::EventHandler(this, &AboutForm::censored_label_Click);
			// 
			// description_label1
			// 
			this->description_label1->AutoSize = true;
			this->description_label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->description_label1->Location = System::Drawing::Point(12, 510);
			this->description_label1->Name = L"description_label1";
			this->description_label1->Size = System::Drawing::Size(112, 17);
			this->description_label1->TabIndex = 2;
			this->description_label1->Text = L"Icons made by";
			// 
			// description_linkLabel1
			// 
			this->description_linkLabel1->AutoSize = true;
			this->description_linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->description_linkLabel1->Location = System::Drawing::Point(130, 510);
			this->description_linkLabel1->Name = L"description_linkLabel1";
			this->description_linkLabel1->Size = System::Drawing::Size(62, 17);
			this->description_linkLabel1->TabIndex = 3;
			this->description_linkLabel1->TabStop = true;
			this->description_linkLabel1->Text = L"Freepik";
			this->description_linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AboutForm::description_linkLabel1_LinkClicked);
			// 
			// description_label2
			// 
			this->description_label2->AutoSize = true;
			this->description_label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->description_label2->Location = System::Drawing::Point(198, 510);
			this->description_label2->Name = L"description_label2";
			this->description_label2->Size = System::Drawing::Size(40, 17);
			this->description_label2->TabIndex = 4;
			this->description_label2->Text = L"from";
			// 
			// description_linkLabel2
			// 
			this->description_linkLabel2->AutoSize = true;
			this->description_linkLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->description_linkLabel2->Location = System::Drawing::Point(244, 510);
			this->description_linkLabel2->Name = L"description_linkLabel2";
			this->description_linkLabel2->Size = System::Drawing::Size(130, 17);
			this->description_linkLabel2->TabIndex = 5;
			this->description_linkLabel2->TabStop = true;
			this->description_linkLabel2->Text = L"www.flaticon.com";
			this->description_linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AboutForm::description_linkLabel2_LinkClicked);
			// 
			// description_label3
			// 
			this->description_label3->AutoSize = true;
			this->description_label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->description_label3->Location = System::Drawing::Point(380, 510);
			this->description_label3->Name = L"description_label3";
			this->description_label3->Size = System::Drawing::Size(107, 17);
			this->description_label3->TabIndex = 6;
			this->description_label3->Text = L"is licensed by";
			// 
			// description_linkLabel3
			// 
			this->description_linkLabel3->AutoSize = true;
			this->description_linkLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->description_linkLabel3->Location = System::Drawing::Point(493, 510);
			this->description_linkLabel3->Name = L"description_linkLabel3";
			this->description_linkLabel3->Size = System::Drawing::Size(81, 17);
			this->description_linkLabel3->TabIndex = 7;
			this->description_linkLabel3->TabStop = true;
			this->description_linkLabel3->Text = L"CC 3.0 BY";
			this->description_linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AboutForm::description_linkLabel3_LinkClicked);
			// 
			// AboutForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(589, 536);
			this->Controls->Add(this->description_linkLabel3);
			this->Controls->Add(this->description_label3);
			this->Controls->Add(this->description_linkLabel2);
			this->Controls->Add(this->description_label2);
			this->Controls->Add(this->description_linkLabel1);
			this->Controls->Add(this->description_label1);
			this->Controls->Add(this->censored_label);
			this->Controls->Add(this->android_pictureBox);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AboutForm";
			this->Text = L"About";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->android_pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void censored_label_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void description_linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e);
		System::Void description_linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e);
		System::Void description_linkLabel3_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e);
	};
}