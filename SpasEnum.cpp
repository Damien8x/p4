// Author: Damien Sudol
// Filename: SpasEnum.cpp
// Date: 11/08/17
// Version: 1.0

#include "SpasEnum.h"



SpasEnum::SpasEnum(string word = " ")
	:SequenceEnum(word)
{

}
string SpasEnum::getVariant()
{

if(word.size() %2 == 0)
{
	string concat = concatenate();
	return concat;
}
else
{
 string trunc = truncate();
 return trunc;
}
}
	

string SpasEnum::concatenate()
{
	string tempWord = word;
	int wordSize = word.size();
	int randomPosition = rand() % (wordSize - 1) + 0;
	string concat = tempWord.substr(randomPosition, wordSize);
	concat = tempWord+concat;
	return concat;
}

string SpasEnum::truncate()
{
	string tempWord = word;
	int wordSize = word.size();
	int randomPosition = rand() % (wordSize) + 0 ;
	string truncate = tempWord.substr(0, randomPosition);
	return truncate;
}


