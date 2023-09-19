#pragma once

#include "Student Information.h";
#include "StudentData.h";

namespace CGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbFirstName;
	private: System::Windows::Forms::TextBox^ tbLastName;
	protected:

	protected:

	private: System::Windows::Forms::RadioButton^ rbMale;
	private: System::Windows::Forms::RadioButton^ rbFemale;
	private: System::Windows::Forms::ComboBox^ cbStrand;



	private: System::Windows::Forms::Label^ lblFirstName;
	private: System::Windows::Forms::Label^ lblLastName;
	private: System::Windows::Forms::Label^ lblSex;
	private: System::Windows::Forms::Label^ lblStrand;
	private: System::Windows::Forms::Button^ btnSubmit;






	protected:









	protected:





	protected:

	protected:






	protected:

	protected:





	protected:




	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
			this->tbLastName = (gcnew System::Windows::Forms::TextBox());
			this->rbMale = (gcnew System::Windows::Forms::RadioButton());
			this->rbFemale = (gcnew System::Windows::Forms::RadioButton());
			this->cbStrand = (gcnew System::Windows::Forms::ComboBox());
			this->lblFirstName = (gcnew System::Windows::Forms::Label());
			this->lblLastName = (gcnew System::Windows::Forms::Label());
			this->lblSex = (gcnew System::Windows::Forms::Label());
			this->lblStrand = (gcnew System::Windows::Forms::Label());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tbFirstName
			// 
			this->tbFirstName->Location = System::Drawing::Point(53, 41);
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->Size = System::Drawing::Size(104, 20);
			this->tbFirstName->TabIndex = 0;
			// 
			// tbLastName
			// 
			this->tbLastName->Location = System::Drawing::Point(195, 41);
			this->tbLastName->Name = L"tbLastName";
			this->tbLastName->Size = System::Drawing::Size(104, 20);
			this->tbLastName->TabIndex = 1;
			// 
			// rbMale
			// 
			this->rbMale->AutoSize = true;
			this->rbMale->Checked = true;
			this->rbMale->Location = System::Drawing::Point(31, 100);
			this->rbMale->Name = L"rbMale";
			this->rbMale->Size = System::Drawing::Size(48, 17);
			this->rbMale->TabIndex = 2;
			this->rbMale->TabStop = true;
			this->rbMale->Text = L"Male";
			this->rbMale->UseVisualStyleBackColor = true;
			// 
			// rbFemale
			// 
			this->rbFemale->AutoSize = true;
			this->rbFemale->Location = System::Drawing::Point(31, 124);
			this->rbFemale->Name = L"rbFemale";
			this->rbFemale->Size = System::Drawing::Size(59, 17);
			this->rbFemale->TabIndex = 3;
			this->rbFemale->Text = L"Female";
			this->rbFemale->UseVisualStyleBackColor = true;
			// 
			// cbStrand
			// 
			this->cbStrand->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cbStrand->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbStrand->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbStrand->FormattingEnabled = true;
			this->cbStrand->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"STEM", L"ABM", L"HUMSS", L"TVL", L"ICT" });
			this->cbStrand->Location = System::Drawing::Point(198, 98);
			this->cbStrand->Name = L"cbStrand";
			this->cbStrand->Size = System::Drawing::Size(121, 21);
			this->cbStrand->TabIndex = 4;
			// 
			// lblFirstName
			// 
			this->lblFirstName->AutoSize = true;
			this->lblFirstName->Location = System::Drawing::Point(53, 13);
			this->lblFirstName->Name = L"lblFirstName";
			this->lblFirstName->Size = System::Drawing::Size(63, 13);
			this->lblFirstName->TabIndex = 5;
			this->lblFirstName->Text = L"First Name: ";
			// 
			// lblLastName
			// 
			this->lblLastName->AutoSize = true;
			this->lblLastName->Location = System::Drawing::Point(195, 13);
			this->lblLastName->Name = L"lblLastName";
			this->lblLastName->Size = System::Drawing::Size(61, 13);
			this->lblLastName->TabIndex = 6;
			this->lblLastName->Text = L"Last Name:";
			// 
			// lblSex
			// 
			this->lblSex->AutoSize = true;
			this->lblSex->Location = System::Drawing::Point(31, 79);
			this->lblSex->Name = L"lblSex";
			this->lblSex->Size = System::Drawing::Size(31, 13);
			this->lblSex->TabIndex = 7;
			this->lblSex->Text = L"Sex: ";
			// 
			// lblStrand
			// 
			this->lblStrand->AutoSize = true;
			this->lblStrand->Location = System::Drawing::Point(198, 79);
			this->lblStrand->Name = L"lblStrand";
			this->lblStrand->Size = System::Drawing::Size(44, 13);
			this->lblStrand->TabIndex = 8;
			this->lblStrand->Text = L"Strand: ";
			// 
			// btnSubmit
			// 
			this->btnSubmit->Location = System::Drawing::Point(99, 156);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(134, 42);
			this->btnSubmit->TabIndex = 9;
			this->btnSubmit->Text = L"Submit";
			this->btnSubmit->UseVisualStyleBackColor = true;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &LoginForm::btnSubmit_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(352, 235);
			this->Controls->Add(this->btnSubmit);
			this->Controls->Add(this->lblStrand);
			this->Controls->Add(this->lblSex);
			this->Controls->Add(this->lblLastName);
			this->Controls->Add(this->lblFirstName);
			this->Controls->Add(this->cbStrand);
			this->Controls->Add(this->rbFemale);
			this->Controls->Add(this->rbMale);
			this->Controls->Add(this->tbLastName);
			this->Controls->Add(this->tbFirstName);
			this->Name = L"LoginForm";
			this->Text = L"Student Infosheet";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		cbStrand->SelectedIndex = 0;

	}
	
	 private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {

		 String^ FirstName = "";
		 String^ LastName = "";
		 String^ Sex;
		 String^ Strand;

		 bool isValid = true;

		 //For First Name And Last Name
		 if (tbFirstName->Text->Trim()->Length > 1) FirstName = tbFirstName->Text;
		 else isValid = false;

		 if (tbLastName->Text->Trim()->Length > 1) LastName = tbLastName->Text;
		 else isValid = false;

		 //For Sex
		 if (rbMale->Checked) Sex = rbMale->Text;
		 else Sex = rbMale->Text;

		//For Strand
		 Strand = cbStrand->Text;

		 if (isValid) {

			 StudentData^ sd = gcnew StudentData();
			 sd->setCredentials(FirstName,LastName,Sex,Strand);

			 StudentInformation^ sif = gcnew StudentInformation();
			 sif->sd = sd;
			 sif->Show();
			 Hide();
		 }
		 else if (FirstName == "" && LastName == "") {
			 MessageBox::Show("Enter Your First Name and Last Name", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		 } 
		 else if (FirstName == "") {
			 MessageBox::Show("Enter Your First Name ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		 }
		 else if (LastName == "") {
			 MessageBox::Show("Enter Your Last Name ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		 }
		 else{
			 MessageBox::Show("First name or Last Name should be 2 or more Characters", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		 }

	}
};
}
