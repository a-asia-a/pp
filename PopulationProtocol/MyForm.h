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
	private: System::Windows::Forms::Button^  button_ceateGraph;


	private: System::Windows::Forms::Button^  button_close;
	private: System::Windows::Forms::GroupBox^  groupBox_protocol;
	private: System::Windows::Forms::GroupBox^  groupBox_graph;
	private: System::Windows::Forms::Label^  label_protocolFile;


	private: System::Windows::Forms::Label^  label_infoProtocol;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Label^  label_infoGraph;
	private: System::Windows::Forms::Label^  label_graphFile;
	private: System::Windows::Forms::GroupBox^  groupBox_simulation;
	private: System::Windows::Forms::Label^  label_simulation;
	private: System::Windows::Forms::TextBox^  textBox_outputSimulationFile;
	private: System::Windows::Forms::Button^  button_simulationBrowse;







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
			this->button_ceateGraph = (gcnew System::Windows::Forms::Button());
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
			this->label_infoProtocol = (gcnew System::Windows::Forms::Label());
			this->label_protocolFile = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label_graphFile = (gcnew System::Windows::Forms::Label());
			this->label_infoGraph = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox_simulation = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_outputSimulationFile = (gcnew System::Windows::Forms::TextBox());
			this->label_simulation = (gcnew System::Windows::Forms::Label());
			this->button_simulationBrowse = (gcnew System::Windows::Forms::Button());
			this->groupBox_protocol->SuspendLayout();
			this->groupBox_graph->SuspendLayout();
			this->groupBox_simulation->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_ceateGraph
			// 
			this->button_ceateGraph->Location = System::Drawing::Point(21, 38);
			this->button_ceateGraph->Name = L"button_ceateGraph";
			this->button_ceateGraph->Size = System::Drawing::Size(198, 40);
			this->button_ceateGraph->TabIndex = 9;
			this->button_ceateGraph->Text = L"Create new graph";
			this->button_ceateGraph->UseVisualStyleBackColor = true;
			this->button_ceateGraph->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button_selectGraph
			// 
			this->button_selectGraph->Location = System::Drawing::Point(237, 38);
			this->button_selectGraph->Name = L"button_selectGraph";
			this->button_selectGraph->Size = System::Drawing::Size(198, 40);
			this->button_selectGraph->TabIndex = 8;
			this->button_selectGraph->Text = L"Select existing graph";
			this->button_selectGraph->UseVisualStyleBackColor = true;
			this->button_selectGraph->Click += gcnew System::EventHandler(this, &MyForm::button_selectGraph_Click);
			// 
			// textBox_selectGraph
			// 
			this->textBox_selectGraph->Location = System::Drawing::Point(21, 128);
			this->textBox_selectGraph->Name = L"textBox_selectGraph";
			this->textBox_selectGraph->Size = System::Drawing::Size(414, 26);
			this->textBox_selectGraph->TabIndex = 3;
			// 
			// checkBox_useExistingGraph
			// 
			this->checkBox_useExistingGraph->AutoSize = true;
			this->checkBox_useExistingGraph->Location = System::Drawing::Point(216, 84);
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
			this->textBox_selectProtocol->Location = System::Drawing::Point(21, 128);
			this->textBox_selectProtocol->Name = L"textBox_selectProtocol";
			this->textBox_selectProtocol->Size = System::Drawing::Size(413, 26);
			this->textBox_selectProtocol->TabIndex = 2;
			// 
			// button_selectProtocol
			// 
			this->button_selectProtocol->Location = System::Drawing::Point(236, 38);
			this->button_selectProtocol->Name = L"button_selectProtocol";
			this->button_selectProtocol->Size = System::Drawing::Size(198, 40);
			this->button_selectProtocol->TabIndex = 1;
			this->button_selectProtocol->Text = L"Select existing Protocol";
			this->button_selectProtocol->UseVisualStyleBackColor = true;
			this->button_selectProtocol->Click += gcnew System::EventHandler(this, &MyForm::button_selectProtocol_Click);
			// 
			// button_createProtocol
			// 
			this->button_createProtocol->Location = System::Drawing::Point(21, 38);
			this->button_createProtocol->Name = L"button_createProtocol";
			this->button_createProtocol->Size = System::Drawing::Size(198, 40);
			this->button_createProtocol->TabIndex = 0;
			this->button_createProtocol->Text = L"Create new Protocol";
			this->button_createProtocol->UseVisualStyleBackColor = true;
			this->button_createProtocol->Click += gcnew System::EventHandler(this, &MyForm::button_createProtocol_Click);
			// 
			// checkBox_useExistingProtocol
			// 
			this->checkBox_useExistingProtocol->AutoSize = true;
			this->checkBox_useExistingProtocol->Location = System::Drawing::Point(193, 84);
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
			this->button_start->Location = System::Drawing::Point(21, 155);
			this->button_start->Name = L"button_start";
			this->button_start->Size = System::Drawing::Size(130, 44);
			this->button_start->TabIndex = 9;
			this->button_start->Text = L"START";
			this->button_start->UseVisualStyleBackColor = true;
			// 
			// button_close
			// 
			this->button_close->Location = System::Drawing::Point(305, 155);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(130, 44);
			this->button_close->TabIndex = 14;
			this->button_close->Text = L"CLOSE";
			this->button_close->UseVisualStyleBackColor = true;
			// 
			// groupBox_protocol
			// 
			this->groupBox_protocol->Controls->Add(this->richTextBox1);
			this->groupBox_protocol->Controls->Add(this->label_protocolFile);
			this->groupBox_protocol->Controls->Add(this->label_infoProtocol);
			this->groupBox_protocol->Controls->Add(this->button_selectProtocol);
			this->groupBox_protocol->Controls->Add(this->textBox_selectProtocol);
			this->groupBox_protocol->Controls->Add(this->button_createProtocol);
			this->groupBox_protocol->Controls->Add(this->checkBox_useExistingProtocol);
			this->groupBox_protocol->Location = System::Drawing::Point(12, 12);
			this->groupBox_protocol->Name = L"groupBox_protocol";
			this->groupBox_protocol->Size = System::Drawing::Size(454, 594);
			this->groupBox_protocol->TabIndex = 15;
			this->groupBox_protocol->TabStop = false;
			this->groupBox_protocol->Text = L"Protocol\'s settings";
			// 
			// groupBox_graph
			// 
			this->groupBox_graph->Controls->Add(this->richTextBox2);
			this->groupBox_graph->Controls->Add(this->label_infoGraph);
			this->groupBox_graph->Controls->Add(this->label_graphFile);
			this->groupBox_graph->Controls->Add(this->button_selectGraph);
			this->groupBox_graph->Controls->Add(this->textBox_selectGraph);
			this->groupBox_graph->Controls->Add(this->button_ceateGraph);
			this->groupBox_graph->Controls->Add(this->checkBox_useExistingGraph);
			this->groupBox_graph->Location = System::Drawing::Point(487, 12);
			this->groupBox_graph->Name = L"groupBox_graph";
			this->groupBox_graph->Size = System::Drawing::Size(454, 348);
			this->groupBox_graph->TabIndex = 16;
			this->groupBox_graph->TabStop = false;
			this->groupBox_graph->Text = L"Graph\'s settings";
			// 
			// label_infoProtocol
			// 
			this->label_infoProtocol->AutoSize = true;
			this->label_infoProtocol->Location = System::Drawing::Point(17, 186);
			this->label_infoProtocol->Name = L"label_infoProtocol";
			this->label_infoProtocol->Size = System::Drawing::Size(280, 20);
			this->label_infoProtocol->TabIndex = 14;
			this->label_infoProtocol->Text = L"Information about Population Protocol:";
			// 
			// label_protocolFile
			// 
			this->label_protocolFile->AutoSize = true;
			this->label_protocolFile->Location = System::Drawing::Point(17, 105);
			this->label_protocolFile->Name = L"label_protocolFile";
			this->label_protocolFile->Size = System::Drawing::Size(181, 20);
			this->label_protocolFile->TabIndex = 15;
			this->label_protocolFile->Text = L"Path to file with protocol:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(21, 218);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(413, 351);
			this->richTextBox1->TabIndex = 16;
			this->richTextBox1->Text = L"";
			// 
			// label_graphFile
			// 
			this->label_graphFile->AutoSize = true;
			this->label_graphFile->Location = System::Drawing::Point(21, 102);
			this->label_graphFile->Name = L"label_graphFile";
			this->label_graphFile->Size = System::Drawing::Size(165, 20);
			this->label_graphFile->TabIndex = 10;
			this->label_graphFile->Text = L"Path to file with graph:";
			// 
			// label_infoGraph
			// 
			this->label_infoGraph->AutoSize = true;
			this->label_infoGraph->Location = System::Drawing::Point(21, 186);
			this->label_infoGraph->Name = L"label_infoGraph";
			this->label_infoGraph->Size = System::Drawing::Size(184, 20);
			this->label_infoGraph->TabIndex = 11;
			this->label_infoGraph->Text = L"Inforamtion about graph:";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(25, 218);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(410, 109);
			this->richTextBox2->TabIndex = 12;
			this->richTextBox2->Text = L"";
			// 
			// groupBox_simulation
			// 
			this->groupBox_simulation->Controls->Add(this->button_simulationBrowse);
			this->groupBox_simulation->Controls->Add(this->label_simulation);
			this->groupBox_simulation->Controls->Add(this->textBox_outputSimulationFile);
			this->groupBox_simulation->Controls->Add(this->button_start);
			this->groupBox_simulation->Controls->Add(this->button_close);
			this->groupBox_simulation->Location = System::Drawing::Point(487, 379);
			this->groupBox_simulation->Name = L"groupBox_simulation";
			this->groupBox_simulation->Size = System::Drawing::Size(456, 227);
			this->groupBox_simulation->TabIndex = 17;
			this->groupBox_simulation->TabStop = false;
			this->groupBox_simulation->Text = L"Simulation";
			// 
			// textBox_outputSimulationFile
			// 
			this->textBox_outputSimulationFile->Location = System::Drawing::Point(25, 78);
			this->textBox_outputSimulationFile->Name = L"textBox_outputSimulationFile";
			this->textBox_outputSimulationFile->Size = System::Drawing::Size(284, 26);
			this->textBox_outputSimulationFile->TabIndex = 15;
			// 
			// label_simulation
			// 
			this->label_simulation->AutoSize = true;
			this->label_simulation->Location = System::Drawing::Point(21, 40);
			this->label_simulation->Name = L"label_simulation";
			this->label_simulation->Size = System::Drawing::Size(194, 20);
			this->label_simulation->TabIndex = 16;
			this->label_simulation->Text = L"Save simulation\'s result in:";
			// 
			// button_simulationBrowse
			// 
			this->button_simulationBrowse->Location = System::Drawing::Point(339, 78);
			this->button_simulationBrowse->Name = L"button_simulationBrowse";
			this->button_simulationBrowse->Size = System::Drawing::Size(96, 26);
			this->button_simulationBrowse->TabIndex = 17;
			this->button_simulationBrowse->Text = L"Browse";
			this->button_simulationBrowse->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(963, 618);
			this->Controls->Add(this->groupBox_simulation);
			this->Controls->Add(this->groupBox_graph);
			this->Controls->Add(this->groupBox_protocol);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox_protocol->ResumeLayout(false);
			this->groupBox_protocol->PerformLayout();
			this->groupBox_graph->ResumeLayout(false);
			this->groupBox_graph->PerformLayout();
			this->groupBox_simulation->ResumeLayout(false);
			this->groupBox_simulation->PerformLayout();
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
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
