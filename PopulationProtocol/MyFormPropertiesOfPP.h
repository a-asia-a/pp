#pragma once

#include <map>
#include <array>

#define STATUS_OK 1
#define STATUS_FAILURE 0

namespace PopulationProtocol {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyFormPropertiesOfPP
	/// </summary>
	public ref class MyFormPropertiesOfPP : public System::Windows::Forms::Form
	{
	public:
		MyFormPropertiesOfPP(void)
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
		~MyFormPropertiesOfPP()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:
	private: System::Windows::Forms::Button^  button_addToInputAlphabet;
	private: static System::Windows::Forms::ListBox^  listBox_InputAlphabet;
	private: System::Windows::Forms::Button^  button_removeFromInputAlphabet;
	private: System::Windows::Forms::TextBox^  textBox_InputAlphabet;
	private: System::Windows::Forms::Label^  label_inputAlphabet;
	private: System::Windows::Forms::Panel^  panel_setsOption;
	private: System::Windows::Forms::Button^  button_clearOutputAlphabet;
	private: System::Windows::Forms::Button^  button_removeFromOutputAlphabet;
	private: System::Windows::Forms::Button^  button_addToOutputAlphabet;
	private: static System::Windows::Forms::ListBox^  listBox_OutputAlphabet;
	private: System::Windows::Forms::TextBox^  textBox_OutputAlphabet;
	private: System::Windows::Forms::Label^  label_outputAlphabet;
	private: System::Windows::Forms::Button^  button_clearStatesAlphabet;
	private: System::Windows::Forms::Button^  button_clearInputAlphabet;
	private: static System::Windows::Forms::ListBox^  listBox_statesAlphabet;
	private: System::Windows::Forms::Button^  button_removeFromStatesAlphabet;
	private: System::Windows::Forms::Button^  button_addToStatesAlphabet;
	private: System::Windows::Forms::Label^  label_statesAlphabet;

	private: System::Windows::Forms::TextBox^  textBox_statesAlphabet;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel_;
	private: static System::Windows::Forms::ListBox^  listBox_InputFunction;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label_InputFunction;





	private: System::Windows::Forms::Button^  button_removeFromInputFunction;

	private: System::Windows::Forms::Button^  button_addInputFunction;
	private: System::Windows::Forms::Button^  button_clearInputFunction;
	private: static System::Windows::Forms::ComboBox^  comboBox_SecondElemOfInputFunc;

	private: static System::Windows::Forms::ComboBox^  comboBox_FirstElemOfInputFunc;

	private: System::Windows::Forms::Button^  button_clearStatesFunction;
	private: System::Windows::Forms::Button^  button_removeOfStatesFunction;
	private: System::Windows::Forms::Button^  button_addToStatesFunction;
	private: static System::Windows::Forms::ListBox^  listBox_StatesFunction;
	private: System::Windows::Forms::Label^  label_StatesFunction;
	private: System::Windows::Forms::Label^  label1;
	private: static System::Windows::Forms::ComboBox^  comboBox_SecondElemOfStatesFunc;

	private: static System::Windows::Forms::ComboBox^  comboBox_FirstElemOfStatesFunc;
	private: System::Windows::Forms::Button^  button_clearOutputFunction;
	private: System::Windows::Forms::Button^  button_removeFromOutputFunction;
	private: System::Windows::Forms::Button^  button_addToOutputFunction;
	private: static System::Windows::Forms::ListBox^  listBox_OutputFunction;
	private: System::Windows::Forms::Label^  label_OutputFunction;
	private: System::Windows::Forms::Label^  label4;
	private: static System::Windows::Forms::ComboBox^  comboBox_SecondElemOfOutputFunc;
	private: static System::Windows::Forms::ComboBox^  comboBox_FirstElemOfOutputFunc;

	

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
			this->button_addToInputAlphabet = (gcnew System::Windows::Forms::Button());
			this->listBox_InputAlphabet = (gcnew System::Windows::Forms::ListBox());
			this->button_removeFromInputAlphabet = (gcnew System::Windows::Forms::Button());
			this->textBox_InputAlphabet = (gcnew System::Windows::Forms::TextBox());
			this->label_inputAlphabet = (gcnew System::Windows::Forms::Label());
			this->panel_setsOption = (gcnew System::Windows::Forms::Panel());
			this->button_clearOutputAlphabet = (gcnew System::Windows::Forms::Button());
			this->button_removeFromOutputAlphabet = (gcnew System::Windows::Forms::Button());
			this->button_addToOutputAlphabet = (gcnew System::Windows::Forms::Button());
			this->listBox_OutputAlphabet = (gcnew System::Windows::Forms::ListBox());
			this->textBox_OutputAlphabet = (gcnew System::Windows::Forms::TextBox());
			this->label_outputAlphabet = (gcnew System::Windows::Forms::Label());
			this->button_clearStatesAlphabet = (gcnew System::Windows::Forms::Button());
			this->button_clearInputAlphabet = (gcnew System::Windows::Forms::Button());
			this->listBox_statesAlphabet = (gcnew System::Windows::Forms::ListBox());
			this->button_removeFromStatesAlphabet = (gcnew System::Windows::Forms::Button());
			this->button_addToStatesAlphabet = (gcnew System::Windows::Forms::Button());
			this->label_statesAlphabet = (gcnew System::Windows::Forms::Label());
			this->textBox_statesAlphabet = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel_ = (gcnew System::Windows::Forms::Panel());
			this->button_clearOutputFunction = (gcnew System::Windows::Forms::Button());
			this->button_removeFromOutputFunction = (gcnew System::Windows::Forms::Button());
			this->button_addToOutputFunction = (gcnew System::Windows::Forms::Button());
			this->listBox_OutputFunction = (gcnew System::Windows::Forms::ListBox());
			this->label_OutputFunction = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox_SecondElemOfOutputFunc = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_FirstElemOfOutputFunc = (gcnew System::Windows::Forms::ComboBox());
			this->button_clearStatesFunction = (gcnew System::Windows::Forms::Button());
			this->button_removeOfStatesFunction = (gcnew System::Windows::Forms::Button());
			this->button_addToStatesFunction = (gcnew System::Windows::Forms::Button());
			this->listBox_StatesFunction = (gcnew System::Windows::Forms::ListBox());
			this->label_StatesFunction = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox_SecondElemOfStatesFunc = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_FirstElemOfStatesFunc = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_SecondElemOfInputFunc = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_FirstElemOfInputFunc = (gcnew System::Windows::Forms::ComboBox());
			this->button_clearInputFunction = (gcnew System::Windows::Forms::Button());
			this->button_removeFromInputFunction = (gcnew System::Windows::Forms::Button());
			this->button_addInputFunction = (gcnew System::Windows::Forms::Button());
			this->listBox_InputFunction = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label_InputFunction = (gcnew System::Windows::Forms::Label());
			this->panel_setsOption->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->panel_->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_AddToInputAlphabet
			// 
			this->button_addToInputAlphabet->Location = System::Drawing::Point(162, 41);
			this->button_addToInputAlphabet->Name = L"button_AddToInputAlphabet";
			this->button_addToInputAlphabet->Size = System::Drawing::Size(75, 23);
			this->button_addToInputAlphabet->TabIndex = 1;
			this->button_addToInputAlphabet->Text = L"Add";
			this->button_addToInputAlphabet->UseVisualStyleBackColor = true;
			this->button_addToInputAlphabet->Click += gcnew System::EventHandler(this, &MyFormPropertiesOfPP::button_addToInputAlphabet_Click);
			// 
			// listBox_InputAlphabet
			// 
			this->listBox_InputAlphabet->FormattingEnabled = true;
			this->listBox_InputAlphabet->ItemHeight = 16;
			this->listBox_InputAlphabet->Location = System::Drawing::Point(18, 74);
			this->listBox_InputAlphabet->Name = L"listBox_InputAlphabet";
			this->listBox_InputAlphabet->Size = System::Drawing::Size(134, 84);
			this->listBox_InputAlphabet->TabIndex = 2;
			// 
			// button_removeFromInputAlphabet
			// 
			this->button_removeFromInputAlphabet->Enabled = false;
			this->button_removeFromInputAlphabet->Location = System::Drawing::Point(162, 106);
			this->button_removeFromInputAlphabet->Name = L"button_removeFromInputAlphabet";
			this->button_removeFromInputAlphabet->Size = System::Drawing::Size(75, 23);
			this->button_removeFromInputAlphabet->TabIndex = 4;
			this->button_removeFromInputAlphabet->Text = L"Remove";
			this->button_removeFromInputAlphabet->UseVisualStyleBackColor = true;
			this->button_removeFromInputAlphabet->Click += gcnew System::EventHandler(this, &MyFormPropertiesOfPP::button_removeFromInputAlphabet_Click);
			// 
			// textBox_InputAlphabet
			// 
			this->textBox_InputAlphabet->Location = System::Drawing::Point(18, 42);
			this->textBox_InputAlphabet->Name = L"textBox_InputAlphabet";
			this->textBox_InputAlphabet->Size = System::Drawing::Size(134, 22);
			this->textBox_InputAlphabet->TabIndex = 5;
			// 
			// label_inputAlphabet
			// 
			this->label_inputAlphabet->AutoSize = true;
			this->label_inputAlphabet->Location = System::Drawing::Point(15, 22);
			this->label_inputAlphabet->Name = L"label_inputAlphabet";
			this->label_inputAlphabet->Size = System::Drawing::Size(125, 17);
			this->label_inputAlphabet->TabIndex = 6;
			this->label_inputAlphabet->Text = L"X - Input Alphabet:";
			// 
			// panel_setsOption
			// 
			this->panel_setsOption->Controls->Add(this->button_clearOutputAlphabet);
			this->panel_setsOption->Controls->Add(this->button_removeFromOutputAlphabet);
			this->panel_setsOption->Controls->Add(this->button_addToOutputAlphabet);
			this->panel_setsOption->Controls->Add(this->listBox_OutputAlphabet);
			this->panel_setsOption->Controls->Add(this->textBox_OutputAlphabet);
			this->panel_setsOption->Controls->Add(this->label_outputAlphabet);
			this->panel_setsOption->Controls->Add(this->button_clearStatesAlphabet);
			this->panel_setsOption->Controls->Add(this->button_clearInputAlphabet);
			this->panel_setsOption->Controls->Add(this->listBox_statesAlphabet);
			this->panel_setsOption->Controls->Add(this->button_removeFromStatesAlphabet);
			this->panel_setsOption->Controls->Add(this->button_addToStatesAlphabet);
			this->panel_setsOption->Controls->Add(this->label_statesAlphabet);
			this->panel_setsOption->Controls->Add(this->textBox_statesAlphabet);
			this->panel_setsOption->Controls->Add(this->label_inputAlphabet);
			this->panel_setsOption->Controls->Add(this->button_removeFromInputAlphabet);
			this->panel_setsOption->Controls->Add(this->textBox_InputAlphabet);
			this->panel_setsOption->Controls->Add(this->listBox_InputAlphabet);
			this->panel_setsOption->Controls->Add(this->button_addToInputAlphabet);
			this->panel_setsOption->Location = System::Drawing::Point(12, 31);
			this->panel_setsOption->Name = L"panel_setsOption";
			this->panel_setsOption->Size = System::Drawing::Size(250, 500);
			this->panel_setsOption->TabIndex = 7;
			// 
			// button_clearOutputAlphabet
			// 
			this->button_clearOutputAlphabet->Enabled = false;
			this->button_clearOutputAlphabet->Location = System::Drawing::Point(162, 465);
			this->button_clearOutputAlphabet->Name = L"button_clearOutputAlphabet";
			this->button_clearOutputAlphabet->Size = System::Drawing::Size(75, 23);
			this->button_clearOutputAlphabet->TabIndex = 19;
			this->button_clearOutputAlphabet->Text = L"Clear";
			this->button_clearOutputAlphabet->UseVisualStyleBackColor = true;
			// 
			// button_removeFromOutputAlphabet
			// 
			this->button_removeFromOutputAlphabet->Enabled = false;
			this->button_removeFromOutputAlphabet->Location = System::Drawing::Point(162, 436);
			this->button_removeFromOutputAlphabet->Name = L"button_removeFromOutputAlphabet";
			this->button_removeFromOutputAlphabet->Size = System::Drawing::Size(75, 23);
			this->button_removeFromOutputAlphabet->TabIndex = 18;
			this->button_removeFromOutputAlphabet->Text = L"Remove";
			this->button_removeFromOutputAlphabet->UseVisualStyleBackColor = true;
			this->button_removeFromOutputAlphabet->Click += gcnew System::EventHandler(this, &MyFormPropertiesOfPP::button_removeFromOutputAlphabet_Click);
			// 
			// button_addToOutputAlphabet
			// 
			this->button_addToOutputAlphabet->Location = System::Drawing::Point(162, 376);
			this->button_addToOutputAlphabet->Name = L"button_addToOutputAlphabet";
			this->button_addToOutputAlphabet->Size = System::Drawing::Size(75, 23);
			this->button_addToOutputAlphabet->TabIndex = 17;
			this->button_addToOutputAlphabet->Text = L"Add";
			this->button_addToOutputAlphabet->UseVisualStyleBackColor = true;
			this->button_addToOutputAlphabet->Click += gcnew System::EventHandler(this, &MyFormPropertiesOfPP::button_addToOutputAlphabet_Click);
			// 
			// listBox_OutputAlphabet
			// 
			this->listBox_OutputAlphabet->FormattingEnabled = true;
			this->listBox_OutputAlphabet->ItemHeight = 16;
			this->listBox_OutputAlphabet->Location = System::Drawing::Point(18, 404);
			this->listBox_OutputAlphabet->Name = L"listBox_OutputAlphabet";
			this->listBox_OutputAlphabet->Size = System::Drawing::Size(134, 84);
			this->listBox_OutputAlphabet->TabIndex = 16;
			// 
			// textBox_OutputAlphabet
			// 
			this->textBox_OutputAlphabet->Location = System::Drawing::Point(18, 376);
			this->textBox_OutputAlphabet->Name = L"textBox_OutputAlphabet";
			this->textBox_OutputAlphabet->Size = System::Drawing::Size(134, 22);
			this->textBox_OutputAlphabet->TabIndex = 15;
			// 
			// label_outputAlphabet
			// 
			this->label_outputAlphabet->AutoSize = true;
			this->label_outputAlphabet->Location = System::Drawing::Point(15, 356);
			this->label_outputAlphabet->Name = L"label_outputAlphabet";
			this->label_outputAlphabet->Size = System::Drawing::Size(137, 17);
			this->label_outputAlphabet->TabIndex = 14;
			this->label_outputAlphabet->Text = L"Y - Output Alphabet:";
			// 
			// button_clearStatesAlphabet
			// 
			this->button_clearStatesAlphabet->Enabled = false;
			this->button_clearStatesAlphabet->Location = System::Drawing::Point(162, 299);
			this->button_clearStatesAlphabet->Name = L"button_clearStatesAlphabet";
			this->button_clearStatesAlphabet->Size = System::Drawing::Size(75, 23);
			this->button_clearStatesAlphabet->TabIndex = 13;
			this->button_clearStatesAlphabet->Text = L"Clear";
			this->button_clearStatesAlphabet->UseVisualStyleBackColor = true;
			// 
			// button_clearInputAlphabet
			// 
			this->button_clearInputAlphabet->Enabled = false;
			this->button_clearInputAlphabet->Location = System::Drawing::Point(162, 135);
			this->button_clearInputAlphabet->Name = L"button_clearInputAlphabet";
			this->button_clearInputAlphabet->Size = System::Drawing::Size(75, 23);
			this->button_clearInputAlphabet->TabIndex = 12;
			this->button_clearInputAlphabet->Text = L"Clear";
			this->button_clearInputAlphabet->UseVisualStyleBackColor = true;
			// 
			// listBox_statesAlphabet
			// 
			this->listBox_statesAlphabet->FormattingEnabled = true;
			this->listBox_statesAlphabet->ItemHeight = 16;
			this->listBox_statesAlphabet->Location = System::Drawing::Point(18, 238);
			this->listBox_statesAlphabet->Name = L"listBox_statesAlphabet";
			this->listBox_statesAlphabet->Size = System::Drawing::Size(134, 84);
			this->listBox_statesAlphabet->TabIndex = 11;
			// 
			// button_removeFromStatesAlphabet
			// 
			this->button_removeFromStatesAlphabet->Enabled = false;
			this->button_removeFromStatesAlphabet->Location = System::Drawing::Point(162, 270);
			this->button_removeFromStatesAlphabet->Name = L"button_removeFromStatesAlphabet";
			this->button_removeFromStatesAlphabet->Size = System::Drawing::Size(75, 23);
			this->button_removeFromStatesAlphabet->TabIndex = 10;
			this->button_removeFromStatesAlphabet->Text = L"Remove";
			this->button_removeFromStatesAlphabet->UseVisualStyleBackColor = true;
			this->button_removeFromStatesAlphabet->Click += gcnew System::EventHandler(this, &MyFormPropertiesOfPP::button_removeFromStatesAlphabet_Click);
			// 
			// button_addToStatesAlphabet
			// 
			this->button_addToStatesAlphabet->Location = System::Drawing::Point(162, 210);
			this->button_addToStatesAlphabet->Name = L"button_addToStatesAlphabet";
			this->button_addToStatesAlphabet->Size = System::Drawing::Size(75, 23);
			this->button_addToStatesAlphabet->TabIndex = 9;
			this->button_addToStatesAlphabet->Text = L"Add";
			this->button_addToStatesAlphabet->UseVisualStyleBackColor = true;
			this->button_addToStatesAlphabet->Click += gcnew System::EventHandler(this, &MyFormPropertiesOfPP::button_addToStatesAlphabet_Click);
			// 
			// label_statesAlphabet
			// 
			this->label_statesAlphabet->AutoSize = true;
			this->label_statesAlphabet->Location = System::Drawing::Point(15, 190);
			this->label_statesAlphabet->Name = L"label_statesAlphabet";
			this->label_statesAlphabet->Size = System::Drawing::Size(115, 17);
			this->label_statesAlphabet->TabIndex = 8;
			this->label_statesAlphabet->Text = L"Q - Set of states:";
			// 
			// textBox_statesAlphabet
			// 
			this->textBox_statesAlphabet->Location = System::Drawing::Point(18, 210);
			this->textBox_statesAlphabet->Name = L"textBox_statesAlphabet";
			this->textBox_statesAlphabet->Size = System::Drawing::Size(134, 22);
			this->textBox_statesAlphabet->TabIndex = 7;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menuToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(966, 28);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(58, 24);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(53, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// panel_
			// 
			this->panel_->Controls->Add(this->button_clearOutputFunction);
			this->panel_->Controls->Add(this->button_removeFromOutputFunction);
			this->panel_->Controls->Add(this->button_addToOutputFunction);
			this->panel_->Controls->Add(this->listBox_OutputFunction);
			this->panel_->Controls->Add(this->label_OutputFunction);
			this->panel_->Controls->Add(this->label4);
			this->panel_->Controls->Add(this->comboBox_SecondElemOfOutputFunc);
			this->panel_->Controls->Add(this->comboBox_FirstElemOfOutputFunc);
			this->panel_->Controls->Add(this->button_clearStatesFunction);
			this->panel_->Controls->Add(this->button_removeOfStatesFunction);
			this->panel_->Controls->Add(this->button_addToStatesFunction);
			this->panel_->Controls->Add(this->listBox_StatesFunction);
			this->panel_->Controls->Add(this->label_StatesFunction);
			this->panel_->Controls->Add(this->label1);
			this->panel_->Controls->Add(this->comboBox_SecondElemOfStatesFunc);
			this->panel_->Controls->Add(this->comboBox_FirstElemOfStatesFunc);
			this->panel_->Controls->Add(this->comboBox_SecondElemOfInputFunc);
			this->panel_->Controls->Add(this->comboBox_FirstElemOfInputFunc);
			this->panel_->Controls->Add(this->button_clearInputFunction);
			this->panel_->Controls->Add(this->button_removeFromInputFunction);
			this->panel_->Controls->Add(this->button_addInputFunction);
			this->panel_->Controls->Add(this->listBox_InputFunction);
			this->panel_->Controls->Add(this->label3);
			this->panel_->Controls->Add(this->label_InputFunction);
			this->panel_->Location = System::Drawing::Point(268, 31);
			this->panel_->Name = L"panel_";
			this->panel_->Size = System::Drawing::Size(404, 500);
			this->panel_->TabIndex = 9;
			// 
			// button_clearOutputFunction
			// 
			this->button_clearOutputFunction->Location = System::Drawing::Point(308, 465);
			this->button_clearOutputFunction->Name = L"button_clearOutputFunction";
			this->button_clearOutputFunction->Size = System::Drawing::Size(75, 23);
			this->button_clearOutputFunction->TabIndex = 28;
			this->button_clearOutputFunction->Text = L"Clear";
			this->button_clearOutputFunction->UseVisualStyleBackColor = true;
			// 
			// button_removeFromOutputFunction
			// 
			this->button_removeFromOutputFunction->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_removeFromOutputFunction->Location = System::Drawing::Point(308, 436);
			this->button_removeFromOutputFunction->Name = L"button_removeFromOutputFunction";
			this->button_removeFromOutputFunction->Size = System::Drawing::Size(75, 23);
			this->button_removeFromOutputFunction->TabIndex = 27;
			this->button_removeFromOutputFunction->Text = L"Remove";
			this->button_removeFromOutputFunction->UseVisualStyleBackColor = true;
			// 
			// button_addToOutputFunction
			// 
			this->button_addToOutputFunction->Location = System::Drawing::Point(308, 374);
			this->button_addToOutputFunction->Name = L"button_addToOutputFunction";
			this->button_addToOutputFunction->Size = System::Drawing::Size(75, 25);
			this->button_addToOutputFunction->TabIndex = 26;
			this->button_addToOutputFunction->Text = L"Add";
			this->button_addToOutputFunction->UseVisualStyleBackColor = true;
			this->button_addToOutputFunction->Click += gcnew System::EventHandler(this, &MyFormPropertiesOfPP::button_addToOutputFunction_Click);
			// 
			// listBox_OutputFunction
			// 
			this->listBox_OutputFunction->FormattingEnabled = true;
			this->listBox_OutputFunction->ItemHeight = 16;
			this->listBox_OutputFunction->Location = System::Drawing::Point(21, 404);
			this->listBox_OutputFunction->Name = L"listBox_OutputFunction";
			this->listBox_OutputFunction->Size = System::Drawing::Size(272, 84);
			this->listBox_OutputFunction->TabIndex = 25;
			// 
			// label_OutputFunction
			// 
			this->label_OutputFunction->AutoSize = true;
			this->label_OutputFunction->Location = System::Drawing::Point(18, 354);
			this->label_OutputFunction->Name = L"label_OutputFunction";
			this->label_OutputFunction->Size = System::Drawing::Size(176, 17);
			this->label_OutputFunction->TabIndex = 24;
			this->label_OutputFunction->Text = L"Output Function ( Q -> Y ):";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(144, 377);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 17);
			this->label4->TabIndex = 23;
			this->label4->Text = L"->";
			// 
			// comboBox_SecondElemOfOutputFunc
			// 
			this->comboBox_SecondElemOfOutputFunc->FormattingEnabled = true;
			this->comboBox_SecondElemOfOutputFunc->Location = System::Drawing::Point(172, 374);
			this->comboBox_SecondElemOfOutputFunc->Name = L"comboBox_SecondElemOfOutputFunc";
			this->comboBox_SecondElemOfOutputFunc->Size = System::Drawing::Size(121, 24);
			this->comboBox_SecondElemOfOutputFunc->TabIndex = 22;
			// 
			// comboBox_FirstElemOfOutputFunc
			// 
			this->comboBox_FirstElemOfOutputFunc->FormattingEnabled = true;
			this->comboBox_FirstElemOfOutputFunc->Location = System::Drawing::Point(21, 374);
			this->comboBox_FirstElemOfOutputFunc->Name = L"comboBox_FirstElemOfOutputFunc";
			this->comboBox_FirstElemOfOutputFunc->Size = System::Drawing::Size(121, 24);
			this->comboBox_FirstElemOfOutputFunc->TabIndex = 21;
			// 
			// button_clearStatesFunction
			// 
			this->button_clearStatesFunction->Location = System::Drawing::Point(308, 301);
			this->button_clearStatesFunction->Name = L"button_clearStatesFunction";
			this->button_clearStatesFunction->Size = System::Drawing::Size(75, 23);
			this->button_clearStatesFunction->TabIndex = 20;
			this->button_clearStatesFunction->Text = L"Clear";
			this->button_clearStatesFunction->UseVisualStyleBackColor = true;
			// 
			// button_removeOfStatesFunction
			// 
			this->button_removeOfStatesFunction->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_removeOfStatesFunction->Location = System::Drawing::Point(308, 272);
			this->button_removeOfStatesFunction->Name = L"button_removeOfStatesFunction";
			this->button_removeOfStatesFunction->Size = System::Drawing::Size(75, 23);
			this->button_removeOfStatesFunction->TabIndex = 19;
			this->button_removeOfStatesFunction->Text = L"Remove";
			this->button_removeOfStatesFunction->UseVisualStyleBackColor = true;
			// 
			// button_addToStatesFunction
			// 
			this->button_addToStatesFunction->Location = System::Drawing::Point(308, 210);
			this->button_addToStatesFunction->Name = L"button_addToStatesFunction";
			this->button_addToStatesFunction->Size = System::Drawing::Size(75, 25);
			this->button_addToStatesFunction->TabIndex = 18;
			this->button_addToStatesFunction->Text = L"Add";
			this->button_addToStatesFunction->UseVisualStyleBackColor = true;
			this->button_addToStatesFunction->Click += gcnew System::EventHandler(this, &MyFormPropertiesOfPP::button_addToStatesFunction_Click);
			// 
			// listBox_StatesFunction
			// 
			this->listBox_StatesFunction->FormattingEnabled = true;
			this->listBox_StatesFunction->ItemHeight = 16;
			this->listBox_StatesFunction->Location = System::Drawing::Point(21, 240);
			this->listBox_StatesFunction->Name = L"listBox_StatesFunction";
			this->listBox_StatesFunction->Size = System::Drawing::Size(272, 84);
			this->listBox_StatesFunction->TabIndex = 17;
			// 
			// label_StatesFunction
			// 
			this->label_StatesFunction->AutoSize = true;
			this->label_StatesFunction->Location = System::Drawing::Point(18, 190);
			this->label_StatesFunction->Name = L"label_StatesFunction";
			this->label_StatesFunction->Size = System::Drawing::Size(198, 17);
			this->label_StatesFunction->TabIndex = 16;
			this->label_StatesFunction->Text = L"Transition Function ( Q -> Q ):";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(144, 213);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 17);
			this->label1->TabIndex = 15;
			this->label1->Text = L"->";
			// 
			// comboBox_SecondElemOfStatesFunc
			// 
			this->comboBox_SecondElemOfStatesFunc->FormattingEnabled = true;
			this->comboBox_SecondElemOfStatesFunc->Location = System::Drawing::Point(172, 210);
			this->comboBox_SecondElemOfStatesFunc->Name = L"comboBox_SecondElemOfStatesFunc";
			this->comboBox_SecondElemOfStatesFunc->Size = System::Drawing::Size(121, 24);
			this->comboBox_SecondElemOfStatesFunc->TabIndex = 14;
			// 
			// comboBox_FirstElemOfStatesFunc
			// 
			this->comboBox_FirstElemOfStatesFunc->FormattingEnabled = true;
			this->comboBox_FirstElemOfStatesFunc->Location = System::Drawing::Point(21, 210);
			this->comboBox_FirstElemOfStatesFunc->Name = L"comboBox_FirstElemOfStatesFunc";
			this->comboBox_FirstElemOfStatesFunc->Size = System::Drawing::Size(121, 24);
			this->comboBox_FirstElemOfStatesFunc->TabIndex = 13;
			// 
			// comboBox_SecondElemOfInputFunc
			// 
			this->comboBox_SecondElemOfInputFunc->FormattingEnabled = true;
			this->comboBox_SecondElemOfInputFunc->Location = System::Drawing::Point(172, 40);
			this->comboBox_SecondElemOfInputFunc->Name = L"comboBox_SecondElemOfInputFunc";
			this->comboBox_SecondElemOfInputFunc->Size = System::Drawing::Size(121, 24);
			this->comboBox_SecondElemOfInputFunc->TabIndex = 12;
			// 
			// comboBox_FirstElemOfInputFunc
			// 
			this->comboBox_FirstElemOfInputFunc->FormattingEnabled = true;
			this->comboBox_FirstElemOfInputFunc->Location = System::Drawing::Point(21, 40);
			this->comboBox_FirstElemOfInputFunc->Name = L"comboBox_FirstElemOfInputFunc";
			this->comboBox_FirstElemOfInputFunc->Size = System::Drawing::Size(121, 24);
			this->comboBox_FirstElemOfInputFunc->TabIndex = 11;
			// 
			// button_clearInputFunction
			// 
			this->button_clearInputFunction->Location = System::Drawing::Point(308, 135);
			this->button_clearInputFunction->Name = L"button_clearInputFunction";
			this->button_clearInputFunction->Size = System::Drawing::Size(75, 23);
			this->button_clearInputFunction->TabIndex = 9;
			this->button_clearInputFunction->Text = L"Clear";
			this->button_clearInputFunction->UseVisualStyleBackColor = true;
			// 
			// button_removeFromInputFunction
			// 
			this->button_removeFromInputFunction->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_removeFromInputFunction->Location = System::Drawing::Point(308, 106);
			this->button_removeFromInputFunction->Name = L"button_removeFromInputFunction";
			this->button_removeFromInputFunction->Size = System::Drawing::Size(75, 23);
			this->button_removeFromInputFunction->TabIndex = 8;
			this->button_removeFromInputFunction->Text = L"Remove";
			this->button_removeFromInputFunction->UseVisualStyleBackColor = true;
			// 
			// button_addInputFunction
			// 
			this->button_addInputFunction->Location = System::Drawing::Point(308, 40);
			this->button_addInputFunction->Name = L"button_addInputFunction";
			this->button_addInputFunction->Size = System::Drawing::Size(75, 25);
			this->button_addInputFunction->TabIndex = 7;
			this->button_addInputFunction->Text = L"Add";
			this->button_addInputFunction->UseVisualStyleBackColor = true;
			this->button_addInputFunction->Click += gcnew System::EventHandler(this, &MyFormPropertiesOfPP::button_addInputFunction_Click);
			// 
			// listBox_InputFunction
			// 
			this->listBox_InputFunction->FormattingEnabled = true;
			this->listBox_InputFunction->ItemHeight = 16;
			this->listBox_InputFunction->Location = System::Drawing::Point(21, 74);
			this->listBox_InputFunction->Name = L"listBox_InputFunction";
			this->listBox_InputFunction->Size = System::Drawing::Size(272, 84);
			this->listBox_InputFunction->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(144, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"->";
			// 
			// label_InputFunction
			// 
			this->label_InputFunction->AutoSize = true;
			this->label_InputFunction->Location = System::Drawing::Point(18, 21);
			this->label_InputFunction->Name = L"label_InputFunction";
			this->label_InputFunction->Size = System::Drawing::Size(164, 17);
			this->label_InputFunction->TabIndex = 2;
			this->label_InputFunction->Text = L"Input Function ( X -> Q ):";
			// 
			// MyFormPropertiesOfPP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(966, 538);
			this->Controls->Add(this->panel_);
			this->Controls->Add(this->panel_setsOption);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyFormPropertiesOfPP";
			this->Text = L"MyFormPropertiesOfPP";
			this->Load += gcnew System::EventHandler(this, &MyFormPropertiesOfPP::MyFormPropertiesOfPP_Load);
			this->panel_setsOption->ResumeLayout(false);
			this->panel_setsOption->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel_->ResumeLayout(false);
			this->panel_->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		int Status = STATUS_FAILURE;
		static array<System::Windows::Forms::ComboBox^>^ comboBoxArray =
										gcnew array<System::Windows::Forms::ComboBox^>{
															comboBox_FirstElemOfInputFunc,
															comboBox_SecondElemOfInputFunc,
															comboBox_FirstElemOfStatesFunc,
															comboBox_SecondElemOfStatesFunc,
															comboBox_FirstElemOfOutputFunc,
															comboBox_SecondElemOfOutputFunc};

		static array<System::Windows::Forms::ListBox^>^ listBoxArray =
										gcnew array<System::Windows::Forms::ListBox^>{
															listBox_InputAlphabet,
															listBox_OutputAlphabet,
															listBox_statesAlphabet,
															listBox_InputFunction,
															listBox_OutputFunction,
															listBox_StatesFunction};

	public:
		bool symbolIsCorrect(int symbol);
		//void searchElemOtherConteiner(System::Object^ elem);
		void searchElemOtherConteiner(System::Windows::Forms::ListBox^ elem);
		int PopulationProtocol::MyFormPropertiesOfPP::addToAlphabet(System::Windows::Forms::TextBox^ elem,
			System::Windows::Forms::ListBox^ listBox_elem);
		int PopulationProtocol::MyFormPropertiesOfPP::removeFromAlphabet(System::Windows::Forms::ListBox^ listBox_elem,
			System::Windows::Forms::Button^ removeButton, System::Windows::Forms::Button^ clearButon);
		int PopulationProtocol::MyFormPropertiesOfPP::addToFunction(System::Windows::Forms::ComboBox^ comboBox_firstElem,
			System::Windows::Forms::ComboBox^ comboBox_secondElem, System::Windows::Forms::ListBox^ listBox_function);
		void PopulationProtocol::MyFormPropertiesOfPP::transtaleProtocol(System::Windows::Forms::ListBox^ listBox);

	private: System::Void MyFormPropertiesOfPP_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void button_addToInputAlphabet_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = addToAlphabet(textBox_InputAlphabet, listBox_InputAlphabet);
		if (STATUS_OK == Status) {
			comboBox_FirstElemOfInputFunc->Items->Add(textBox_InputAlphabet->Text[0]);
			
			button_removeFromInputAlphabet->Enabled = true;
			button_clearInputAlphabet->Enabled = true;
		}	

		this->textBox_InputAlphabet->Text = " ";
		this->textBox_InputAlphabet->Focus();
		this->textBox_InputAlphabet->SelectionLength = 0;
	}
	
	private: System::Void button_addToStatesAlphabet_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = addToAlphabet(textBox_statesAlphabet, listBox_statesAlphabet);
		if (STATUS_OK == Status) {
			this->comboBox_FirstElemOfStatesFunc->Items->Add(this->textBox_statesAlphabet->Text[0]);
			this->comboBox_SecondElemOfStatesFunc->Items->Add(this->textBox_statesAlphabet->Text[0]);
			this->comboBox_SecondElemOfInputFunc->Items->Add(this->textBox_statesAlphabet->Text[0]);
			this->comboBox_FirstElemOfOutputFunc->Items->Add(this->textBox_statesAlphabet->Text[0]);

			this->button_removeFromStatesAlphabet->Enabled = true;
			this->button_clearStatesAlphabet->Enabled = true;
		}

		this->textBox_statesAlphabet->Text = " ";
		this->textBox_statesAlphabet->Focus();
		this->textBox_statesAlphabet->SelectionLength = 0;
	}

	private: System::Void button_addToOutputAlphabet_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = addToAlphabet(textBox_OutputAlphabet, listBox_OutputAlphabet);
		if (STATUS_OK == Status) {
			this->comboBox_SecondElemOfOutputFunc->Items->Add(this->textBox_OutputAlphabet->Text[0]);
			
			this->button_removeFromOutputAlphabet->Enabled = true;
			this->button_clearOutputAlphabet->Enabled = true;
		}

		this->textBox_OutputAlphabet->Text = " ";
		this->textBox_OutputAlphabet->Focus();
		this->textBox_OutputAlphabet->SelectionLength = 0;
	}

	private: System::Void button_removeFromInputAlphabet_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = removeFromAlphabet(listBox_InputAlphabet, button_removeFromInputAlphabet, button_clearInputAlphabet);	
		if (STATUS_OK == Status) {
			comboBox_FirstElemOfInputFunc->Items->Remove(listBox_InputAlphabet->SelectedItem);

		}	
	}
		
	private: System::Void button_removeFromStatesAlphabet_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = removeFromAlphabet(listBox_statesAlphabet, button_removeFromStatesAlphabet, button_clearStatesAlphabet);
		if (STATUS_OK == Status) {
			comboBox_SecondElemOfInputFunc->Items->Remove(listBox_StatesFunction->SelectedItem);
			comboBox_FirstElemOfStatesFunc->Items->Remove(listBox_StatesFunction->SelectedItem);
			comboBox_SecondElemOfStatesFunc->Items->Remove(listBox_StatesFunction->SelectedItem);
		}
	}

	private: System::Void button_removeFromOutputAlphabet_Click(System::Object^  sender, System::EventArgs^  e) {
		Status = removeFromAlphabet(listBox_OutputAlphabet, button_removeFromOutputAlphabet, button_clearOutputAlphabet);
		if (STATUS_OK == Status) {
			comboBox_FirstElemOfStatesFunc->Items->Remove(listBox_StatesFunction->SelectedItem);
		}
	}

	private: System::Void button_addToStatesFunction_Click(System::Object^  sender, System::EventArgs^  e) {
		addToFunction(comboBox_FirstElemOfStatesFunc, comboBox_SecondElemOfStatesFunc, listBox_StatesFunction);
	}

	private: System::Void button_addInputFunction_Click(System::Object^  sender, System::EventArgs^  e) {
		addToFunction(comboBox_FirstElemOfInputFunc, comboBox_SecondElemOfInputFunc, listBox_InputFunction);
	}
	private: System::Void button_addToOutputFunction_Click(System::Object^  sender, System::EventArgs^  e) {
		addToFunction(comboBox_FirstElemOfOutputFunc, comboBox_SecondElemOfOutputFunc, listBox_OutputFunction);
	}


};

}
