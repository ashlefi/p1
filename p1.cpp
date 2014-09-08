
#include <iostream>
#include <string>
#include "deciphermodel.h"


int main(int argc, const char* argv[])
{
	
	std::cout <<  "Welcome to the game!" << std::endl;

	//define a decipher model
	deciphermodel dm;
	std::string plain;

	std::string ciph = dm.getCipher();

	//dm.readFile();

	std::cout << dm.getAlphabet() << std::endl;
	std::cout << dm.getCiphertext() << std::endl << std::endl;
	
	for (int i = 0; i < 5; i++){
		plain = dm.Decipher(dm.getCiphertext(), ciph, dm.getPlaintext());
	}

	std::cout << plain << std::endl << std::endl;

	
	return 0;
}
