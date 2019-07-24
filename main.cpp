#include <iostream>
#include <vector>
#include <sstream>
#include <string>

class AlphabetLetter
{
	char letter;
public:

	AlphabetLetter(char letter) : letter(letter){}

	char getLetter()
	{
		return letter;
	}


};


class Displayer
{
public:
	Displayer()
	{

	}

	void display(std::vector<AlphabetLetter> string)
	{		std::string outstream;	
			for(auto letter : string){
				outstream += letter.getLetter();
			}
			std::cout << outstream << std::endl;
	}

};


int main(int argc, const char * argv[]) {

	AlphabetLetter H = AlphabetLetter("H"[0]);
	AlphabetLetter e = AlphabetLetter("e"[0]);
	AlphabetLetter l = AlphabetLetter("l"[0]);
	AlphabetLetter o = AlphabetLetter("o"[0]);

	AlphabetLetter space = AlphabetLetter(" "[0]);

	AlphabetLetter W = AlphabetLetter("W"[0]);
	AlphabetLetter r = AlphabetLetter("r"[0]);
	AlphabetLetter d = AlphabetLetter("d"[0]);

	std::vector<AlphabetLetter> letters;
	letters.push_back(H);
	letters.push_back(e);
	letters.push_back(l);
	letters.push_back(l);
	letters.push_back(o);
	letters.push_back(space);
	letters.push_back(W);
	letters.push_back(o);
	letters.push_back(r);
	letters.push_back(l);
	letters.push_back(d);

	Displayer displayer;

	displayer.display(letters);

    return 0;
}
