#include <string>
#include <vector>

/*********** deciphermodel Class!!!!!!!********************
** This class is designed to get and set the three parts ** 
** of a cipher puzzle. Ciphertext is the message after a **
** cipher has been applied,  a cipher is the pattern used** 
** to decode the cipher text and plain text is the code  **
** after it has been decoded.                            **
**********************************************************/
class deciphermodel{
	
private: 
		std::string alphabet;
		std::string ciphertext;
		std::string plaintext;
		std::string cipher; //stored as vector to  account for a dynamic codetable
		;

public:

	//default constructor
	deciphermodel(){
		for (char alpha = 'a'; alpha <= 'z'; alpha++){
			alphabet.push_back(alpha);

		}
		cipher = "cirsdgavuwhjtxmynzopflbekq";

		//cipher.at(1) = "bcsdfgleuvqwxzijkmhnptayor";
		//cipher.at(2) = "lgtakcdevpjusfybxmhzrwoniq";
		//cipher.at(3) = "cfelsvptmxzkdbyghinjauroqw";
		//cipher.at(4) = "cirsdgavuwhjtxmynzopflbekq";

		ciphertext = "vshx su wgcy wx mcix sy, cvwclu gcu rxxe, cvwclu wsvv rx.";
	};

	//getters
	std::string getCiphertext(){
		return ciphertext;
	}

	std::string getPlaintext(){
		return plaintext;
	}

	std::string getAlphabet(){
		return alphabet;
	}

	std::string getCipher(){
		return cipher;
	}

	//setters
	void setCiphertext(std::string ctext){
		ciphertext = ctext;
	}

	void setPlaintext(std::string ptext){
		plaintext = ptext;
	}

	void setCipher(std::string c){
		cipher = c;
	}

	//functions

	//reads the file and fills in one cipher per member of the array. 
	//Vector class allows for an unknown abount of ciphers
	void readFile();
	
	//accepts a string and checks the dictionary to see if the string is
	//a word is comprehensible
	bool isWord(std::string word);

	//applies the cipher to the cyphertext and returns the resulting 
	//text. 
	std::string Decipher(std::string ctext, std::string onecipher, std::string plain);

};
