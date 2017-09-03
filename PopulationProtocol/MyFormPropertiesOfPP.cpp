#include "MyFormPropertiesOfPP.h"

 bool PopulationProtocol::MyFormPropertiesOfPP::symbolIsCorrect(int symbol)
{
	if ((symbol >= 65 && symbol <= 90) ||
		(symbol >= 97 && symbol <= 122) ||
		(symbol >= 48 && symbol <= 57)) {
		return true;
	}
	else
		return false;
}

void PopulationProtocol::MyFormPropertiesOfPP::searchElemOtherConteiner(System::Windows::Forms::ListBox^ listBox_elem) {
	
	//for (int i = 0; i < comboBox_FirstElemOfInputFunc->Items->Count; i++){
	System::String^ nazwa_lb = listBox_elem->SelectedItem->ToString();
	//System::
	//System::Collections::IEnumerator^ it = comboBox_FirstElemOfInputFunc->Items->GetEnumerator();
	
	for (int it = 0; it < comboBox_FirstElemOfInputFunc->Items->Count; it++) {
		System::String^ nazwa_cb = comboBox_FirstElemOfInputFunc->Text;// ->ToString(); // GetItemText();
		if (nazwa_cb == nazwa_lb){ //(comboBox_FirstElemOfInputFunc->Items->ToString())) {
			System::Console::WriteLine(comboBox_FirstElemOfInputFunc->Items->Count);
			System::Console::WriteLine(nazwa_cb);
			System::Console::WriteLine(nazwa_lb);
			comboBox_FirstElemOfInputFunc->Items->Remove(nazwa_cb->ToString());
		}	
	}

	

		/*
	if(comboBox_FirstElemOfInputFunc->Items->Contains == comboBox_FirstElemOfInputFunc->Items->Contains(listBox_elem)){
		comboBox_FirstElemOfInputFunc->Items->Remove(elem);
		//listBox_InputFunction->Items->Remove(listBox_InputFunction->Items->Contains(elem));
	}
	if(comboBox_SecondElemOfInputFunc->Items->Contains(elem)){
		comboBox_SecondElemOfInputFunc->Items->Remove(elem);
	}
	if (comboBox_FirstElemOfStatesFunc->Items->Contains(elem)) {
		comboBox_FirstElemOfStatesFunc->Items->Remove(elem);
		//listBox_StatesFunction->Items->Remove(listBox_StatesFunction->Items->Contains(elem));
	}
	if (comboBox_SecondElemOfStatesFunc->Items->Contains(elem)) {
		comboBox_SecondElemOfStatesFunc->Items->Remove(elem);
	}
	if(comboBox_FirstElemOfOutputFunc->Items->Contains(elem)){
		comboBox_FirstElemOfOutputFunc->Items->Remove(elem);
		//listBox_OutputFunction->Items->Remove(listBox_OutputFunction->Items->Contains(elem));
	}
	if (comboBox_SecondElemOfOutputFunc->Items->Contains(elem)) {
		comboBox_SecondElemOfOutputFunc->Items->Remove(elem);
	}
	*/

	
}

int PopulationProtocol::MyFormPropertiesOfPP::removeFromAlphabet(System::Windows::Forms::ListBox^ listBox_elem, 
	System::Windows::Forms::Button^ removeButton, System::Windows::Forms::Button^ clearButon)
{
	if (listBox_elem->Items->Count != 0) {
		if (listBox_elem->Items->Count == 1) {
			removeButton->Enabled = false;
			clearButon->Enabled = false;
		}
		searchElemOtherConteiner(listBox_elem);
		listBox_elem->Items->Remove(listBox_elem->SelectedItem);
		
		return STATUS_OK;
	}
	else
		return STATUS_FAILURE;

}

int PopulationProtocol::MyFormPropertiesOfPP::addToAlphabet(System::Windows::Forms::TextBox^ textBox_elem,
	System::Windows::Forms::ListBox^ listBox_elem) 
{
	//add do set of InputAlphabet
	/*
	Protocol* PP = Protocol::getInstance();
	if (textBox_elem == textBox_InputAlphabet)
		PP->addElemToInputAlphabetOfProtocol(textBox_elem->Text[0]);
	else if (textBox_elem == textBox_statesAlphabet)
		PP->addElemToStatesOfProtocol(textBox_elem->Text[0]);
	else if (textBox_elem == textBox_OutputAlphabet)
		PP->addElemToOutputAlphabetOfProtocol(textBox_elem->Text[0]);
	*/
	
	//add to other listBoxes, but first check if symbol is not replied in InputAlphabet	
	if (!listBox_elem->Items->Contains(textBox_elem->Text[0]) && symbolIsCorrect(textBox_elem->Text[0])) {
		listBox_elem->Items->Add(textBox_elem->Text[0]);
		return STATUS_OK;
	}
	else
		return STATUS_FAILURE;

}
int PopulationProtocol::MyFormPropertiesOfPP::addToFunction(System::Windows::Forms::ComboBox^ comboBox_firstElem,
	System::Windows::Forms::ComboBox^ comboBox_secondElem, System::Windows::Forms::ListBox^ listBox_function)
{
	if (!listBox_function->Items->Contains(comboBox_firstElem->Text[0] + " -> " + comboBox_secondElem->Text[0])) {
		listBox_function->Items->Add(comboBox_firstElem->Text[0] + " -> " + comboBox_secondElem->Text[0]);
		return STATUS_OK;
	}
	else
		return STATUS_FAILURE;
}

void PopulationProtocol::MyFormPropertiesOfPP::transtaleProtocol(System::Windows::Forms::ListBox^ listBox)
{
	for (int i = 0; i < listBox->Items->Count ; i++)
	{
		System::Console::WriteLine(i);
		System::Console::WriteLine(listBox->SelectedItem);
		char x = listBox->Text[0];
		//Protocol p;
		//p.addElemToInputAlphabetOfProtocol(x);
		//listBox->
	}



	//for (int )
	//comboBoxArray

}
