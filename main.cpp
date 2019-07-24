#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

class ICharacter
{
public:
    virtual char getCharacter() const = 0;
};

class Character : public ICharacter
{
    char character;
public:

    Character() = default;

    Character(char character) : character(character){};

    char getCharacter() const override
    {
        return character;
    }
};

class AlphabetLetter : public Character
{

public:
    AlphabetLetter() = delete;
    AlphabetLetter(char character) : Character(character) {}

};

class WhiteSpace : public Character
{
    static const char character = ' ';
public:
    WhiteSpace() : Character(character) {}
};

class Displayer
{
public:
    Displayer() = default;

    template <class T>
    void display(const vector<T>& string)
    {   
            for(auto character : string){
                cout << character.getCharacter();
            }
            cout << endl;
    }

};

#define INSTANTIATE_LETTER(LETTER) \
        AlphabetLetter LETTER = AlphabetLetter(#LETTER[0]); \


int main(int argc, const char * argv[]) {

    INSTANTIATE_LETTER(H);
    INSTANTIATE_LETTER(e);
    INSTANTIATE_LETTER(l);
    INSTANTIATE_LETTER(o);

    WhiteSpace space = WhiteSpace();
    AlphabetLetter O = AlphabetLetter('O');
    AlphabetLetter P = AlphabetLetter('P');

    AlphabetLetter W = AlphabetLetter('W');
    AlphabetLetter r = AlphabetLetter('r');
    AlphabetLetter d = AlphabetLetter('d');

    vector<Character> characters;
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
