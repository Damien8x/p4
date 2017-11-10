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
/*
SequenceEnum se("test sequence");

cout << se.getWord() << endl << endl;

cout << se.getVariant() << endl << endl;

cout << se.getVariant() << endl << endl;

cout << se.getVariant() << endl << endl;

cout << se.getVariant() << endl << endl;

cout << se.getWord() << endl << endl;
*/
SeqExtract seqExtract("test seqExtract");

cout << seqExtract.getWord() << endl << endl;

cout << seqExtract.getSubSequence("t") << endl << endl;

cout << seqExtract.getSubSequence("act") << endl << endl;

cout << seqExtract.getSubSequence("test seqExtract") << endl << endl;

cout << seqExtract.getSubSequence("test seqExtract but too long") << endl << endl;

cout << seqExtract.getSubSequence("p") << endl << endl;
/*
cout << seqExtract.getVariant() << endl << endl;

cout << seqExtract.getVariant() << endl << endl;

cout << seqExtract.getVariant() << endl << endl;

cout << seqExtract.getVariant() << endl << endl;

cout << seqExtract.getWord() << endl << endl;


SpasEnum spasEnum("test spasEnum");

cout << spasEnum.getWord() << endl << endl;

cout << spasEnum.getVariant() << endl << endl;

cout << spasEnum.getVariant() << endl << endl;

cout << spasEnum.getVariant() << endl << endl;

cout << spasEnum.getVariant() << endl << endl;

cout << spasEnum.getWord() << endl << endl;
*/




return 0;
}
