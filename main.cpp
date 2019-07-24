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
    static const char character = ' ';
public:
    Whitespace() : Character(character) {}
};

class Displayer
{
public:
    Displayer() = default;

    template <class T>
    void display(std::vector<T> string)
    {   
            for(auto character : string){
                std::cout << character.getCharacter();
            }
            std::cout << std::endl;
    }

};


int main(int argc, const char * argv[]) {

    AlphabetLetter H = AlphabetLetter('H');
    AlphabetLetter e = AlphabetLetter('e');
    AlphabetLetter l = AlphabetLetter('l');
    AlphabetLetter o = AlphabetLetter('o');

    Whitespace space = Whitespace();
    AlphabetLetter O = AlphabetLetter('O');
    AlphabetLetter P = AlphabetLetter('P');

    AlphabetLetter W = AlphabetLetter('W');
    AlphabetLetter r = AlphabetLetter('r');
    AlphabetLetter d = AlphabetLetter('d');

    std::vector<Character> characters;
    characters.push_back(H);
    characters.push_back(e);
    characters.push_back(l);
    characters.push_back(l);
    characters.push_back(o);
    characters.push_back(space);
    characters.push_back(O);
    characters.push_back(O);
    characters.push_back(P);
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
