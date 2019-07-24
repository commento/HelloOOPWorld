#include <iostream>
#include <vector>
#include <sstream>
#include <string>

class Character
{
	char character;
public:

	Character() = default;

	Character(char character) : character(character){};

	char getCharacter()
	{
		return character;
	}
};

class AlphabetLetter : public Character
{

public:
	AlphabetLetter(char character) : Character(character) {}

};

class Whitespace : public Character
{
	static const char character = " "[0];
public:
	Whitespace() : Character(character) {}
};

class Displayer
{
public:
	Displayer()
	{

	}

	void display(std::vector<Character> string)
	{		std::string outstream;	
			for(auto character : string){
				outstream += character.getCharacter();
			}
			std::cout << outstream << std::endl;
	}

};


int main(int argc, const char * argv[]) {

	AlphabetLetter H = AlphabetLetter("H"[0]);
	AlphabetLetter e = AlphabetLetter("e"[0]);
	AlphabetLetter l = AlphabetLetter("l"[0]);
	AlphabetLetter o = AlphabetLetter("o"[0]);

	Whitespace space = Whitespace();

	AlphabetLetter W = AlphabetLetter("W"[0]);
	AlphabetLetter r = AlphabetLetter("r"[0]);
	AlphabetLetter d = AlphabetLetter("d"[0]);

	std::vector<Character> characters;
	characters.push_back(H);
	characters.push_back(e);
	characters.push_back(l);
	characters.push_back(l);
	characters.push_back(o);
	characters.push_back(space);
	characters.push_back(W);
	characters.push_back(o);
	characters.push_back(r);
	characters.push_back(l);
	characters.push_back(d);

	Displayer displayer;

	displayer.display(characters);

    return 0;
}
