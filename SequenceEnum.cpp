//  Author: Damien Sudol
// Filename: SequenceEnum
// Date: 11/08/17
// Version: 1.0


#include "SequenceEnum.h"
#include <string>

// protected attribute available to all derived classes
string word;
// private attribute available only to base class
string wordVariant;

SequenceEnum::SequenceEnum(string p_word)
{
if (p_word.size() > 2)
{
	this->word = p_word;
	this->wordVariant = p_word;
}
else
	delete this;
}

string SequenceEnum::getVariant()
{	
	string temp = recursiveVariant();
	wordVariant = word;
	return temp;	
}

bool SequenceEnum::guessWord(string guessWord) const
{
	return (word == guessWord) ? true : false;
}



string SequenceEnum::getWord() const
{
	return word;
}

// helper method designed to call itself recursively under
// set conditions, adding to the possibility for multiple inserts
// of characters contained in "word".
// precondition: ON
// modify: wordVariant will accrue a minimum of one character.
// postcondition: ON
string SequenceEnum::recursiveVariant()
{
	int wordLength = word.size();
	int randomPosition = rand() % (wordLength- 1) + 0; 
	if(randomPosition % 2 == 0)
		recursiveVariant();
	char variantChar = word[randomPosition];
	string varString(1, variantChar);
	
	wordVariant = wordVariant.insert(randomPosition, varString); 
	return wordVariant;

}

