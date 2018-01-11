#include "GraphForm.h"

using namespace System;
using namespace System::Windows::Forms;


DialogResult PopulationProtocol::showMessageGraph(int idxMessage) {
	System::String^ message1 = "Incorrect number of nodes. Correct it!";
	//System::String^ message2 = "This graph doesn't match to Protocol. Select other file.";
	//System::String^ message3 = "Incorrect number of nodes in graph. Correct number of nodes in file.";
	System::String^ caption = "Error";
	MessageBoxButtons buttons = MessageBoxButtons::OK;

	
	PopulationProtocol::GraphForm::textBox_numberOfNodes->Text = " ";
	//PopulationProtocol::GraphForm::richTextBox_infoGraph->Clear();
	//PopulationProtocol::GraphForm::richTextBox_infoGraph->AppendText("No graph uploaded");

	switch (idxMessage) {
	case 1: return MessageBox::Show(message1, caption, buttons);
	//case 2: return MessageBox::Show(message2, caption, buttons);
	//case 3: return MessageBox::Show(message3, caption, buttons);
	}
}