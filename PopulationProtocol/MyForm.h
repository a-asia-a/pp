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
	private: System::Windows::Forms::CheckBox^  checkBox_useExistingGraph;
	protected:

	private: System::Windows::Forms::OpenFileDialog^  openFileDialogOfProtocol;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialogOfGraph;


	private: System::Windows::Forms::Button^  button_selectProtocol;
	private: System::Windows::Forms::TextBox^  textBox_selectProtocol;


	private: System::Windows::Forms::OpenFileDialog^ OpenFileDialogWithProtocol;
	private: System::Windows::Forms::TextBox^  textBox_selectGraph;




	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialogOfProtocol;
	private: String^ folderName;
	private: System::Windows::Forms::Button^  button_selectGraph;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialogOfGraph;



	private: bool fileOpened;
	private: System::Windows::Forms::Button^  button_start;




	private: System::Windows::Forms::CheckBox^  checkBox_useExistingProtocol;


	private: System::Windows::Forms::Button^  button_createProtocol;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button_close;
	private: System::Windows::Forms::GroupBox^  groupBox_protocol;
	private: System::Windows::Forms::GroupBox^  groupBox_graph;




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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button_selectGraph = (gcnew System::Windows::Forms::Button());
			this->textBox_selectGraph = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_useExistingGraph = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_selectProtocol = (gcnew System::Windows::Forms::TextBox());
			this->button_selectProtocol = (gcnew System::Windows::Forms::Button());
			this->button_createProtocol = (gcnew System::Windows::Forms::Button());
			this->checkBox_useExistingProtocol = (gcnew System::Windows::Forms::CheckBox());
			this->openFileDialogOfProtocol = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialogOfGraph = (gcnew System::Windows::Forms::OpenFileDialog());
			this->folderBrowserDialogOfProtocol = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->folderBrowserDialogOfGraph = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->button_start = (gcnew System::Windows::Forms::Button());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->groupBox_protocol = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_graph = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_protocol->SuspendLayout();
			this->groupBox_graph->SuspendLayout();
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(280, 39);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(226, 47);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Create New Graph";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(21, 39);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(226, 47);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Create New Random Graph";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button_selectGraph
			// 
			this->button_selectGraph->Enabled = false;
			this->button_selectGraph->Location = System::Drawing::Point(531, 134);
			this->button_selectGraph->Name = L"button_selectGraph";
			this->button_selectGraph->Size = System::Drawing::Size(77, 31);
			this->button_selectGraph->TabIndex = 8;
			this->button_selectGraph->Text = L"Select";
			this->button_selectGraph->UseVisualStyleBackColor = true;
			this->button_selectGraph->Click += gcnew System::EventHandler(this, &MyForm::button_selectGraph_Click);
			// 
			// textBox_selectGraph
			// 
			this->textBox_selectGraph->Enabled = false;
			this->textBox_selectGraph->Location = System::Drawing::Point(21, 136);
			this->textBox_selectGraph->Name = L"textBox_selectGraph";
			this->textBox_selectGraph->Size = System::Drawing::Size(485, 26);
			this->textBox_selectGraph->TabIndex = 3;
			// 
			// checkBox_useExistingGraph
			// 
			this->checkBox_useExistingGraph->AutoSize = true;
			this->checkBox_useExistingGraph->Location = System::Drawing::Point(21, 105);
			this->checkBox_useExistingGraph->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox_useExistingGraph->Name = L"checkBox_useExistingGraph";
			this->checkBox_useExistingGraph->Size = System::Drawing::Size(219, 24);
			this->checkBox_useExistingGraph->TabIndex = 0;
			this->checkBox_useExistingGraph->Text = L"use existing file with graph";
			this->checkBox_useExistingGraph->UseVisualStyleBackColor = true;
			this->checkBox_useExistingGraph->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_useExistingGraph_CheckedChanged);
			// 
			// textBox_selectProtocol
			// 
			this->textBox_selectProtocol->Enabled = false;
			this->textBox_selectProtocol->Location = System::Drawing::Point(21, 129);
			this->textBox_selectProtocol->Name = L"textBox_selectProtocol";
			this->textBox_selectProtocol->Size = System::Drawing::Size(485, 26);
			this->textBox_selectProtocol->TabIndex = 2;
			// 
			// button_selectProtocol
			// 
			this->button_selectProtocol->Enabled = false;
			this->button_selectProtocol->Location = System::Drawing::Point(531, 129);
			this->button_selectProtocol->Name = L"button_selectProtocol";
			this->button_selectProtocol->Size = System::Drawing::Size(77, 31);
			this->button_selectProtocol->TabIndex = 1;
			this->button_selectProtocol->Text = L"Select";
			this->button_selectProtocol->UseVisualStyleBackColor = true;
			this->button_selectProtocol->Click += gcnew System::EventHandler(this, &MyForm::button_selectProtocol_Click);
			// 
			// button_createProtocol
			// 
			this->button_createProtocol->Location = System::Drawing::Point(21, 36);
			this->button_createProtocol->Name = L"button_createProtocol";
			this->button_createProtocol->Size = System::Drawing::Size(485, 40);
			this->button_createProtocol->TabIndex = 0;
			this->button_createProtocol->Text = L"Create new Protocol";
			this->button_createProtocol->UseVisualStyleBackColor = true;
			this->button_createProtocol->Click += gcnew System::EventHandler(this, &MyForm::button_createProtocol_Click);
			// 
			// checkBox_useExistingProtocol
			// 
			this->checkBox_useExistingProtocol->AutoSize = true;
			this->checkBox_useExistingProtocol->Location = System::Drawing::Point(21, 96);
			this->checkBox_useExistingProtocol->Name = L"checkBox_useExistingProtocol";
			this->checkBox_useExistingProtocol->Size = System::Drawing::Size(241, 24);
			this->checkBox_useExistingProtocol->TabIndex = 12;
			this->checkBox_useExistingProtocol->Text = L"use existing file with Prortocol";
			this->checkBox_useExistingProtocol->UseVisualStyleBackColor = true;
			this->checkBox_useExistingProtocol->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_useExistingProtocol_CheckedChanged);
			// 
			// openFileDialogOfGraph
			// 
			this->openFileDialogOfGraph->FileName = L"openFileDialogOfGraph";
			// 
			// folderBrowserDialogOfProtocol
			// 
			this->folderBrowserDialogOfProtocol->Description = L"Pick your protocol file";
			this->folderBrowserDialogOfProtocol->ShowNewFolderButton = false;
			// 
			// button_start
			// 
			this->button_start->Enabled = false;
			this->button_start->Location = System::Drawing::Point(12, 395);
			this->button_start->Name = L"button_start";
			this->button_start->Size = System::Drawing::Size(130, 44);
			this->button_start->TabIndex = 9;
			this->button_start->Text = L"START";
			this->button_start->UseVisualStyleBackColor = true;
			// 
			// button_close
			// 
			this->button_close->Location = System::Drawing::Point(509, 395);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(130, 44);
			this->button_close->TabIndex = 14;
			this->button_close->Text = L"CLOSE";
			this->button_close->UseVisualStyleBackColor = true;
			// 
			// groupBox_protocol
			// 
			this->groupBox_protocol->Controls->Add(this->button_selectProtocol);
			this->groupBox_protocol->Controls->Add(this->textBox_selectProtocol);
			this->groupBox_protocol->Controls->Add(this->button_createProtocol);
			this->groupBox_protocol->Controls->Add(this->checkBox_useExistingProtocol);
			this->groupBox_protocol->Location = System::Drawing::Point(12, 12);
			this->groupBox_protocol->Name = L"groupBox_protocol";
			this->groupBox_protocol->Size = System::Drawing::Size(628, 174);
			this->groupBox_protocol->TabIndex = 15;
			this->groupBox_protocol->TabStop = false;
			this->groupBox_protocol->Text = L"Protocol\'s properties";
			// 
			// groupBox_graph
			// 
			this->groupBox_graph->Controls->Add(this->button_selectGraph);
			this->groupBox_graph->Controls->Add(this->button5);
			this->groupBox_graph->Controls->Add(this->textBox_selectGraph);
			this->groupBox_graph->Controls->Add(this->button4);
			this->groupBox_graph->Controls->Add(this->checkBox_useExistingGraph);
			this->groupBox_graph->Location = System::Drawing::Point(12, 192);
			this->groupBox_graph->Name = L"groupBox_graph";
			this->groupBox_graph->Size = System::Drawing::Size(628, 184);
			this->groupBox_graph->TabIndex = 16;
			this->groupBox_graph->TabStop = false;
			this->groupBox_graph->Text = L"Graph\'s properties";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(657, 455);
			this->Controls->Add(this->groupBox_graph);
			this->Controls->Add(this->groupBox_protocol);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->button_start);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox_protocol->ResumeLayout(false);
			this->groupBox_protocol->PerformLayout();
			this->groupBox_graph->ResumeLayout(false);
			this->groupBox_graph->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	

	
	private: System::Void button_selectProtocol_Click(System::Object^  sender, System::EventArgs^  e) {	
		OpenFileDialog ^ openFileDialogOfProtocol = gcnew OpenFileDialog();
		openFileDialogOfProtocol->Filter = L"txt|*.txt";
		openFileDialogOfProtocol->ShowDialog();
		this->textBox_selectProtocol->Text = openFileDialogOfProtocol->FileName;
		// to trzeba zmienic
		//openFileDialogOfProtocol->OpenFile();
	}
	private: System::Void button_selectGraph_Click(System::Object^  sender, System::EventArgs^  e) {
		/*
		System::Windows::Forms::DialogResult result = folderBrowserDialog1->ShowDialog();
		if (result == System::Windows::Forms::DialogResult::OK)
		{
			MessageBox::Show(folderBrowserDialog1->SelectedPath);
			textBox2->Text = folderBrowserDialog1->SelectedPath;
		}
		*/
		OpenFileDialog ^ openFileDialogOfGraph = gcnew OpenFileDialog();
		openFileDialogOfGraph->Filter = L"txt|*.txt";
		openFileDialogOfGraph->ShowDialog();
		this->textBox_selectGraph->Text = openFileDialogOfGraph->FileName;
		// to trzeba zmienic
		//openFileDialog1->OpenFile();


	}

	private: System::Void checkBox_useExistingProtocol_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox_useExistingProtocol->Checked) {
			textBox_selectProtocol->Enabled = true;
			button_selectProtocol->Enabled = true;
		}
		else {
			textBox_selectProtocol->Enabled = false;
			button_selectProtocol->Enabled = false;
		}
	}
	private: System::Void checkBox_useExistingGraph_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox_useExistingGraph->Checked) {
			textBox_selectGraph->Enabled = true;
			button_selectGraph->Enabled = true;
		}
		else {
			textBox_selectGraph->Enabled = false;
			button_selectGraph->Enabled = false;
		}
}
	

private: System::Void openFileDialogProtocol_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void button_createProtocol_Click(System::Object^  sender, System::EventArgs^  e) {
}


// stare
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
