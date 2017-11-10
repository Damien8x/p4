// Author: Damien Sudol
// Filename: SeqExtract.h
// Date: 11/08/17
// Version: 1.0

#ifndef SEQEXTRACT_H
#define SEQEXTRACT_H

#include "SequenceEnum.h"
#include <iostream>
#include <string>

using namespace std;

class SeqExtract: public SequenceEnum
{
public:

SeqExtract(string);
string getSubSequence(string);	

private:

protected:


};


#endif
