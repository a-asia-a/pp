#include "MyForm.h"
#include "Functions.h"
#include <msclr\marshal_cppstd.h>


int PopulationProtocol::createFileAboutProtocolInfo(System::String^ pathToFile)
{
	std::ifstream file;
	std::string newPathToFile = msclr::interop::marshal_as<std::string>(pathToFile);
	file.open(newPathToFile); 
	
	std::ofstream newFile("infoProtocol.txt");
	bool Status;
	std::string line;
	std::string newLine;

	// DODAJ SPR CZY TO PROTOCOL CZY GRAF
	System::String^ message = "This file doesn't contains protocol! Select other file.";
	System::String^ caption = "Error";
	MessageBoxButtons buttons = MessageBoxButtons::OK;
	DialogResult result;

	if (file.is_open()) {
		std::getline(file, line);
		if (line == "<input>") {
			Status = STATUS_OK;
		}
		else {
			result = MessageBox::Show(message, caption, buttons);
			PopulationProtocol::MyForm::textBox_selectProtocol->Text = " ";
			PopulationProtocol::MyForm::richTextBox_infoProtocol->Clear();
			PopulationProtocol::MyForm::richTextBox_infoProtocol->AppendText("No protocol uploaded");
			Status = STATUS_FAILURE;
		}
	}
	else
		Status = STATUS_FAILURE;


	if (STATUS_OK == Status) {
		//std::cout << "otworzono" << std::endl;
		vectorOfInputAlphabetTemp.clear();
		while (!file.eof()) {
			if (line == "<input>") {
				std::getline(file, line);
				newLine = "input alphabet: ";
				while (line[1] != '/') {
					newLine = newLine + line + "; ";
					//dodaj do tymczasowego zbioru symboli wejsciowych, 0-ilosc tych symboli w zbiorze
					// std::make_pair(n, a[1])
					//vectorOfInputAlphabetTemp.push_back({ line,0 });
					vectorOfInputAlphabetTemp.push_back(std::make_pair(line, 0));
					std::getline(file, line);
				}
				newFile << newLine << std::endl;
			}
			if (line == "<output>") {
				std::getline(file, line);
				newLine = "output alphabet: ";
				while (line[1] != '/') {
					newLine = newLine + line + "; ";
					std::getline(file, line);
				}
				newFile << newLine << std::endl;
			}
			if (line == "<states>") {
				std::getline(file, line);
				newLine = "states: ";
				while (line[1] != '/') {
					newLine = newLine + line + "; ";
					std::getline(file, line);
				}
				newFile << newLine << std::endl;
			}
			if (line == "<inputFunction>") {
				std::getline(file, line);
				newFile << std::endl << "input function: " << std::endl;
				while (line[1] != '/') {
					newFile << line << std::endl;
					std::getline(file, line);
				}
			}
			if (line == "<statesFunction>") {
				std::getline(file, line);
				newFile << std::endl << "states function: " << std::endl;
				while (line[1] != '/') {
					newFile << line << std::endl;
					std::getline(file, line);
				}
			}
			if (line == "<outputFunction>") {
				std::getline(file, line);
				newFile << std::endl << "output function: " << std::endl;
				while (line[1] != '/') {
					newFile << line << std::endl;
					std::getline(file, line);
				}
			}
			std::getline(file, line);
		}// end while(!file.eof())
		return 0;
	}// end if(STATUS_OK)
	else
		return 1;
}

void PopulationProtocol::loadInfoProtocolFromFile() 
{
	std::ifstream file;
	file.open("infoProtocol.txt");

	bool Status;
	std::string line;

	if (file.is_open()) 
		Status = STATUS_OK;
	else 
		Status = STATUS_FAILURE;


	if (STATUS_OK == Status) {
		PopulationProtocol::MyForm::richTextBox_infoProtocol->Clear();
		while (!file.eof()) {
			std::getline(file, line);	
			PopulationProtocol::MyForm::richTextBox_infoProtocol->AppendText(gcnew String(line.c_str()) + Environment::NewLine);
		}
	}
	remove("infoProtocol.txt");
}

int PopulationProtocol::prepareGraphInfo(System::String^ pathToFile)
{
	std::ifstream file;
	std::string newPathToFile = msclr::interop::marshal_as<std::string>(pathToFile);
	file.open(newPathToFile);

	bool Status;
	std::string line;

	if (file.is_open()) {
		std::getline(file, line);

		if (!validateGraph(pathToFile))
			Status = STATUS_OK;
		else
			Status = STATUS_FAILURE;
	}
	else
		Status = STATUS_FAILURE;


	int numberOfNodes = 0;
	std::vector<std::pair<std::string, int> >::iterator it;

	if (STATUS_OK == Status) {
		PopulationProtocol::MyForm::richTextBox_infoGraph->Clear();
		std::getline(file, line);
		numberOfNodes = atoi(line.c_str());
		//reset the number each input symbol
		for (it = vectorOfInputAlphabetTemp.begin(); it != vectorOfInputAlphabetTemp.end(); ++it) {
			it->second = 0;
		}
		// count the number each input symbol
		while (!file.eof()) {
			std::getline(file, line);
			for (it = vectorOfInputAlphabetTemp.begin(); it != vectorOfInputAlphabetTemp.end(); ++it) {
				if (line == it->first)
					it->second += 1; //increment number the input symbol
			}
		}
		return numberOfNodes;
	}
	else
		return 0;
}

void PopulationProtocol::showGraphInfo(int numberOfNodes) {
	std::vector<std::pair<std::string, int> >::iterator it;

	PopulationProtocol::MyForm::richTextBox_infoGraph->AppendText(
		"Number of nodes :" + numberOfNodes + System::Environment::NewLine);
	for (it = vectorOfInputAlphabetTemp.begin(); it != vectorOfInputAlphabetTemp.end(); ++it) {
			PopulationProtocol::MyForm::richTextBox_infoGraph->AppendText(
			"The number of nodes with the input symbol " + gcnew String(it->first.c_str()) +
			": " + it->second + System::Environment::NewLine);
	}
}

bool PopulationProtocol::validateGraph(System::String^ pathToFile) {
	std::ifstream file;
	std::string newPathToFile = msclr::interop::marshal_as<std::string>(pathToFile);
	file.open(newPathToFile);
	std::string line;

	bool Status;
	if (file.is_open())
		Status = STATUS_OK;
	else
		Status = STATUS_FAILURE;

	DialogResult result;

	// if file contains a graph
	std::getline(file, line);
	if (line == "#graph")
		Status = STATUS_OK;
	else {
		result = showMessage(1);
		Status = STATUS_FAILURE;
	}

	//if file has appropirate nombero of nodes and if file with graph is correct (is compatibile with protocol)

	if (Status == STATUS_OK) {
		std::vector<std::pair<std::string, int> >::iterator it;
		bool symbolIsProper = false;
		int numberInputSymbolInFile = 0;
		std::getline(file, line);
		int numberOfNodes = atoi(line.c_str());

		while (!file.eof()) {
			std::getline(file, line);
			numberInputSymbolInFile += 1;
			for (it = vectorOfInputAlphabetTemp.begin(); it != vectorOfInputAlphabetTemp.end(); ++it) {
				if (line == it->first) {
					symbolIsProper = true;
					break;
				}
			}
			if (!symbolIsProper) {
				result = showMessage(2);
				Status = STATUS_FAILURE;
			}
			//clean flag 
			symbolIsProper = false;
		}
		if (numberOfNodes != numberInputSymbolInFile) {
			result = showMessage(3);
			Status = STATUS_FAILURE;
		}
	}

	if (STATUS_OK == Status)
		return 0;
	else
		return 1;
}

System::Windows::Forms::DialogResult PopulationProtocol::showMessage(int idxMessage) {
	System::String^ message1 = "This file doesn't contains graph! Select other file.";
	System::String^ message2 = "This graph doesn't match to Protocol. Select other file.";
	System::String^ message3 = "Incorrect number of nodes in graph. Correct number of nodes in file.";
	System::String^ caption = "Error";
	MessageBoxButtons buttons = MessageBoxButtons::OK;

	PopulationProtocol::MyForm::textBox_selectGraph->Text = " ";
	PopulationProtocol::MyForm::richTextBox_infoGraph->Clear();
	PopulationProtocol::MyForm::richTextBox_infoGraph->AppendText("No graph uploaded");

	switch (idxMessage) {
	case 1: return MessageBox::Show(message1, caption, buttons);
	case 2: return MessageBox::Show(message2, caption, buttons);
	case 3: return MessageBox::Show(message3, caption, buttons);
	}
}

