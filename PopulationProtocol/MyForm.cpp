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