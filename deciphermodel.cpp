#include "deciphermodel.h"
#include <fstream>
#include <string>
#include <iostream>

//gets the information from the files and stores it into the correct variables
void deciphermodel::readFile(){
	std::string line;
	
	std::ifstream ciphers;
	ciphers.open("codetable.txt");
	if (!ciphers){
		std::cout << "EVERYTHING IS AWESOME!";
	}
	else{
		std::cout << "I LOVE EVERYONE!";
	}

	/*std::ifstream code;
	code.open("crypt.txt");

	if (code.is_open()){
		while (std::getline(code, line)){
			this->ciphertext = line;
		}
	}
	code.close();*/
}


bool deciphermodel::isWord(std::string word){
	
	return true;
}

std::string deciphermodel::Decipher(std::string ctext, std::string onecipher, std::string plain){
	std::cout << ctext.size() << std::endl;
	std::cout << onecipher.size() << std::endl;
	for (int i = 0; i < ctext.size(); i++){
		if (!isalpha(ctext[i])){
			plain.push_back(ctext[i]);
		}
		else{
			for (int j = 0; j < onecipher.size(); j++){
				if (ctext[i] == onecipher[j]){
					plain.push_back(alphabet[j]);
				}

			}
		}
		
	}

	return plain;
}
