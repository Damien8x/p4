// Author: Damien Sudol
// Filename: SequenceEnum
// Date: 11/08/17
// Version: 1.0



#ifndef SEQUENCEENUM_H
#define SEQUENCEENUM_H

#include <iostream>
#include <string>
using namespace std;

class SequenceEnum
{
public:
	SequenceEnum(string);





	string getVariant();

	bool guessWord(string);

	string getWord();


private:

protected:
string word;


};




#endif
