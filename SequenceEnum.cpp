//  Author: Damien Sudol
// Filename: SequenceEnum
// Date: 11/08/17
// Version: 1.0


#include "SequenceEnum.h"
#include <string>

// protected attribute available to all derived classes
string word;

SequenceEnum::SequenceEnum(string p_word)
{
if (p_word.size() > 2)
	this->word = p_word;
else
	delete this;
}

string SequenceEnum::getVariant() const
{	
	int wordLength = word.size();
	int randomPosition = rand() % (wordLength- 1) + 0; 
	char variantChar = word[randomPosition];
	string varString(1, variantChar);
	string variantWord = word;
	variantWord = variantWord.insert(randomPosition, varString); 
	return  variantWord;
}

bool SequenceEnum::guessWord(string guessWord) const
{
	return (word == guessWord) ? true : false;
}



string SequenceEnum::getWord() const
{
	return word;
}



