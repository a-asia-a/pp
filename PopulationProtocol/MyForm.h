#pragma once

namespace PopulationProtocol {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialogProtocol;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::OpenFileDialog^ OpenFileDialogWithProtocol;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog;
	private: String^ folderName;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	protected:

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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->openFileDialogProtocol = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->folderBrowserDialog = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(74, 157);
			this->checkBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(125, 24);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"If New graph";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// openFileDialogProtocol
			// 
			this->openFileDialogProtocol->FileName = L"NewFileWithProtocol";
			this->openFileDialogProtocol->Filter = L" Plik tekstowy (*.txt)|*.txt";
			this->openFileDialogProtocol->InitialDirectory = L"C:\\magisterka\\pp";
			this->openFileDialogProtocol->Title = L"OpenFile";
			this->openFileDialogProtocol->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialogProtocol_FileOk);
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(603, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(74, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(485, 26);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(74, 199);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(485, 26);
			this->textBox2->TabIndex = 3;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(164, 430);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(100, 96);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(70, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Load protocol";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(85, 262);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(386, 90);
			this->richTextBox2->TabIndex = 6;
			this->richTextBox2->Text = L"";
			// 
			// folderBrowserDialog
			// 
			this->folderBrowserDialog->Description = L"Pick your protocol file";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(70, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 20);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Load graph";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(603, 199);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 31);
			this->button2->TabIndex = 8;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1189, 655);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult result = folderBrowserDialog->ShowDialog();
		if (result == System::Windows::Forms::DialogResult::OK)
		{
			MessageBox::Show(folderBrowserDialog->SelectedPath);
			textBox1->Text = folderBrowserDialog->SelectedPath;
		}
			
			

		//if (openFileDialogProtocol->ShowDialog() == System::Windows::Forms::DialogResult::OK){

		//	this->richTextBox1->LoadFile(openFileDialogProtocol->FileName, RichTextBoxStreamType::PlainText);
		//	//this->textBox1->Text(openFileDialogProtocol->FileName);
		//	//this->textBox2->Text(openFileDialogProtocol->SafeFileName);
		//	//System::IO::StreamReader ^ sr = gcnew
		//	//System::IO::StreamReader(openFileDialogProtocol->FileName);
		//	//MessageBox::Show(sr->ReadToEnd());
		//	//sr->Close();
		//}

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult result = folderBrowserDialog->ShowDialog();
		if (result == System::Windows::Forms::DialogResult::OK)
		{
			MessageBox::Show(folderBrowserDialog->SelectedPath);
			textBox2->Text = folderBrowserDialog->SelectedPath;
		}

	}

	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (textBox2->Enabled == true)
		{
			textBox2->Enabled = false;
			button2->Enabled = false;
		}
		else
		{
			textBox2->Enabled = true;
			button2->Enabled = true;
		}
	}

private: System::Void openFileDialogProtocol_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}


};
}
