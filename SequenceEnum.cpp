//  Author: Damien Sudol
// Filename: SequenceEnum
// Date: 11/08/17
// Version: 1.0


#include "SequenceEnum.h"
#include <string>

string word;

SequenceEnum::SequenceEnum(string p_word)
	:word(p_word)
{
}

string SequenceEnum::getVariant()
{	
	int wordLength = word.size();
	int randomPosition = rand() % (wordLength- 1) + 0; 
	char variantChar = word[randomPosition];
	string varString(1, variantChar);
	string variantWord = word.insert(randomPosition, varString); 
	return  variantWord;
}

bool SequenceEnum::guessWord(string guessWord)
{
	return (word == guessWord) ? true : false;
}



string SequenceEnum::getWord()
{
	return word;
}



