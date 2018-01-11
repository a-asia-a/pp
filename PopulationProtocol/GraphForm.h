#pragma once

namespace PopulationProtocol {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GraphForm
	/// </summary>
	public ref class GraphForm : public System::Windows::Forms::Form
	{
	public:
		GraphForm(void)
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
		~GraphForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_numberOfNodes;
	private: System::Windows::Forms::CheckBox^  checkBox_ifRandom;
	private: System::Windows::Forms::GroupBox^  groupBox_defineGraph;
	private: System::Windows::Forms::TextBox^  textBox1;

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
			this->label_numberOfNodes = (gcnew System::Windows::Forms::Label());
			this->checkBox_ifRandom = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox_defineGraph = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label_numberOfNodes
			// 
			this->label_numberOfNodes->AutoSize = true;
			this->label_numberOfNodes->Location = System::Drawing::Point(12, 26);
			this->label_numberOfNodes->Name = L"label_numberOfNodes";
			this->label_numberOfNodes->Size = System::Drawing::Size(91, 13);
			this->label_numberOfNodes->TabIndex = 0;
			this->label_numberOfNodes->Text = L"Number of nodes:";
			// 
			// checkBox_ifRandom
			// 
			this->checkBox_ifRandom->AutoEllipsis = true;
			this->checkBox_ifRandom->AutoSize = true;
			this->checkBox_ifRandom->Checked = true;
			this->checkBox_ifRandom->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox_ifRandom->Location = System::Drawing::Point(15, 50);
			this->checkBox_ifRandom->Name = L"checkBox_ifRandom";
			this->checkBox_ifRandom->Size = System::Drawing::Size(93, 17);
			this->checkBox_ifRandom->TabIndex = 2;
			this->checkBox_ifRandom->Text = L"random nodes";
			this->checkBox_ifRandom->UseVisualStyleBackColor = true;
			// 
			// groupBox_defineGraph
			// 
			this->groupBox_defineGraph->Location = System::Drawing::Point(15, 77);
			this->groupBox_defineGraph->Name = L"groupBox_defineGraph";
			this->groupBox_defineGraph->Size = System::Drawing::Size(296, 164);
			this->groupBox_defineGraph->TabIndex = 3;
			this->groupBox_defineGraph->TabStop = false;
			this->groupBox_defineGraph->Text = L"define the graph";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(109, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(51, 20);
			this->textBox1->TabIndex = 1;
			// 
			// GraphForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(327, 256);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox_defineGraph);
			this->Controls->Add(this->checkBox_ifRandom);
			this->Controls->Add(this->label_numberOfNodes);
			this->Name = L"GraphForm";
			this->Text = L"GraphForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void domainUpDown1_SelectedItemChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
