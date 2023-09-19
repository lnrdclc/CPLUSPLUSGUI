#pragma once

#include "StudentData.h";

namespace CGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentInformation
	/// </summary>
	public ref class StudentInformation : public System::Windows::Forms::Form
	
	{
	public:
		StudentData^ sd = gcnew StudentData();

	public:
		StudentInformation(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentInformation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblFullName;
	private: System::Windows::Forms::Label^ lblSex;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblStrand;

	private: System::Windows::Forms::Label^ label6;
	protected:






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblFullName = (gcnew System::Windows::Forms::Label());
			this->lblSex = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblStrand = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(74, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Full Name: ";
			// 
			// lblFullName
			// 
			this->lblFullName->AutoSize = true;
			this->lblFullName->Location = System::Drawing::Point(74, 72);
			this->lblFullName->Name = L"lblFullName";
			this->lblFullName->Size = System::Drawing::Size(0, 13);
			this->lblFullName->TabIndex = 1;
			// 
			// lblSex
			// 
			this->lblSex->AutoSize = true;
			this->lblSex->Location = System::Drawing::Point(74, 136);
			this->lblSex->Name = L"lblSex";
			this->lblSex->Size = System::Drawing::Size(0, 13);
			this->lblSex->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(74, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 16);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Sex: ";
			// 
			// lblStrand
			// 
			this->lblStrand->AutoSize = true;
			this->lblStrand->Location = System::Drawing::Point(74, 200);
			this->lblStrand->Name = L"lblStrand";
			this->lblStrand->Size = System::Drawing::Size(0, 13);
			this->lblStrand->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(74, 174);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 16);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Strand: ";
			this->label6->Click += gcnew System::EventHandler(this, &StudentInformation::label6_Click);
			// 
			// StudentInformation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(354, 243);
			this->Controls->Add(this->lblStrand);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->lblSex);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lblFullName);
			this->Controls->Add(this->label1);
			this->Name = L"StudentInformation";
			this->Text = L"StudentInformation";
			this->Load += gcnew System::EventHandler(this, &StudentInformation::StudentInformation_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StudentInformation_Load(System::Object^ sender, System::EventArgs^ e) {

		lblFullName->Text = sd->getFullName();
		lblSex->Text = sd->getSex();
		lblStrand->Text = sd->getStrand();
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
