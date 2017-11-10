// Author: Damien Sudol
// Filename: SpasEnum.h
// Date: 11/08/17
// Version: 1.0

#ifndef SPASENUM_H
#define SPASENUM_H

#include "SequenceEnum.h"
#include <iostream>
#include <string>

using namespace std;

class SpasEnum: public SequenceEnum
{
public:

	SpasEnum(string);
	

	string concatOrTrunc();	

private:

protected:


};


#endif
