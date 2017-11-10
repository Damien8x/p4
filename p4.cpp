// Author: Damien Sudol
// Filename: p4
// Date: 11/08/17
// Version: 1.0

#include "SequenceEnum.h"
#include "SeqExtract.h"
#include "SpasEnum.h"
#include <iostream>
#include <string>

using namespace std;

int main(){

SequenceEnum se("test sequence");

cout << se.getWord() << endl << endl;

cout << se.getVariant() << endl << endl;

SeqExtract seqExtract("test seqExtract");

cout << seqExtract.getWord() << endl << endl;

SpasEnum spasEnum("test spasEnum");

cout << spasEnum.getWord() << endl << endl;




return 0;
}
