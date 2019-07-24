#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <memory>

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

    Character(const char character) : character(character){};

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
        AlphabetLetter LETTER = AlphabetLetter(#LETTER[0]) \

#define ADD_CHAR(CHAR) \
            characters.push_back(CHAR) \

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
    ADD_CHAR(H);
    ADD_CHAR(e);
    ADD_CHAR(l);
    ADD_CHAR(l);
    ADD_CHAR(o);
    ADD_CHAR(space);
    ADD_CHAR(O);
    ADD_CHAR(O);
    ADD_CHAR(P);
    ADD_CHAR(space);
    ADD_CHAR(W);
    ADD_CHAR(o);
    ADD_CHAR(r);
    ADD_CHAR(l);
    ADD_CHAR(d);

    Displayer displayer;
    displayer.display(characters);

    return 0;
}
