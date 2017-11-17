// Author: Damien Sudol
// Filename: p4
// Date: 11/08/17
// Version: 1.0

#include "SequenceEnum.h"
#include "SeqExtract.h"
#include "SpasEnum.h"
#include <iostream>
#include <string>

//Description: Driver designed to test full functionality and limits of base
//class SequenceEnum and derived classes SeqExtract and SpasEnum. All public
//methods will be tested for each class type, with a random distribution of
//objects and insuring all objects remiain distinct. All state transitions
//will be tested, while adhering to the contract and invariants set forth by
//each class, respectively.
//
//
//Assumptions: To test full functionality of classes SequenceEnum, SeqExract,
//SpasEnum. Intended purporse of classes are to have distinct outputs for
//their respective getVariant() class, to be used in a pattern recognition 
//test.

using namespace std;
string STAR = "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
void printGetVariant(SequenceEnum&);
void printGetVariant(SpasEnum&);
void printGetVariant(SeqExtract&, string);
void printGuessWord(SequenceEnum&, string);
void printWelcomeMessage();

int main(){

printWelcomeMessage();

//~create multiple distinct objects for base and drived classes~
SequenceEnum seq("SequenceEnum");
SequenceEnum seq2("second SequenceEnum");
SequenceEnum seq3("3rd Base!");
SeqExtract seqx("SeqExtract");
SeqExtract seqx2("second SeqExtract");
SeqExtract seqx3("the third SeqExtract object");
SpasEnum spa("SpasEnum");
SpasEnum spa2("second SpasEnum");
SpasEnum spa3("THE THIRD spasENUM oBjEcT");

//~print respective variants for all objects~
printGetVariant(seq);
printGetVariant(seq2);
printGetVariant(seq3);
printGetVariant(spa);
printGetVariant(spa2);
printGetVariant(spa3);
//expect word variant: "Extract"
printGetVariant(seqx, "Seq");
//expect word variant: "second Seq"
printGetVariant(seqx2, "Extract");
//expect word variant: "Word Too Long"
printGetVariant(seqx3, "THIS STRING IS TOOOOOOOOOOOOOO LONG");
//expect word variant: "Word Match"
printGetVariant(seqx2, "second SeqExtract");
//expect word variant: "No substring detected"
printGetVariant(seqx, "1");

//~test guessWord functionality for derived and base classes~
printGuessWord(seq, "SequenceEnum");
printGuessWord(seq2, "not it");
printGuessWord(seqx, "Seq");
printGuessWord(seqx2, "second SeqExtract");
printGuessWord(spa, "SpasEnum");
printGuessWord(spa2, "not right");

//~retest all objects respective variants~
printGetVariant(seq);
printGetVariant(seq2);
printGetVariant(seq3);
printGetVariant(spa);
printGetVariant(spa2);
printGetVariant(spa3);
//expect word variant: "Extract"
printGetVariant(seqx, "Seq");
//expect word variant: "second Seq"
printGetVariant(seqx2, "Extract");
//expect word variant: "Word Too Long"
printGetVariant(seqx3, "THIS STRING IS TOOOOOOOOOOOOOO LONG");
//expect word variant: "Word Match"
printGetVariant(seqx2, "second SeqExtract");
//expect word variant: "No substring detected"
printGetVariant(seqx, "1");

return 0;
}

//Description: Formats and prints encapsulated word of SequenceEnum object,
//followed by a variant of said word, a string with repeating characters
//contained in the encapsulated word.
//precondition: ON
//modify: None
//postcondition: ON
void printGetVariant(SequenceEnum & obj)
{
cout << "type:\t\tSequenceEnum"<<endl; 
cout << "original word:\t"<< obj.getWord() << endl; 
cout << "word variant:\t" << obj.getVariant() << endl << endl;
cout << STAR << endl;

}

//Description: Formats and prints encapsulated word of SpasEnum object,
//followed by a variant of said word, either a truncated version of the
//encapsulated word, or a concatenation of a subsequence contained in the 
//word.
//precondition: ON
//modify: None
//postcondition: ON
void printGetVariant(SpasEnum & obj)
{
cout << "type:\t\tSpasEnum" << endl;
cout << "original word:\t"<< obj.getWord() << endl; 
cout << "word variant:\t" << obj.getVariant() << endl << endl;
cout << STAR << endl;

}

//Description: Formats and prints encapsulated word of SeqExtract object,
//followed by a possible variant of said word, depending on argument matching
//a subsequence of the encapsulated word. If a match is determined by the 
//function the respected beginning subsequence, or tail subsequence is returned.
//if no subsequence is provided, a message will display saying for what reason.
//precondition: ON
//modify: None
//postcondition: ON
void printGetVariant(SeqExtract & obj, string sub)
{
cout << "type:\t\t\tSeqExtract" << endl;
cout << "original word:\t\t"<< obj.getWord() << endl; 
cout << "proffered subsequence:\t" << sub << endl; 
cout << "word variant:\t\t" << obj.getVariant(sub) << endl << endl;
cout << STAR << endl;

}

//Description: Formats and prints users "guess", encapsulated word
//and a numeric representation if they are a match, returned by 
//the guessWord(string) method, 1->match, 0->no match.
//precondition: ON
//modify: None
//postcondition: ON
void printGuessWord(SequenceEnum & obj, string guess)
{
cout <<"guess:\t" << guess << endl;
cout <<"word:\t" << obj.getWord() << endl;
cout <<"match:\t" << obj.guessWord(guess) << endl << endl;
cout << STAR << endl;
}

//Description: Driver welcome message, displaying intent.
void printWelcomeMessage()
{
cout << STAR << endl;
cout << "*\t\t\t\t~Welcome~\t\t\t\t\t*" << endl;
cout << "*\t\t\t\t\t\t\t\t\t\t*" << endl;
cout << "*\tName: Damien Sudol\t\t\t\t\t\t\t*" << endl;
cout << "*\tProject 4 Driver\t\t\t\t\t\t\t*" << endl;
cout << "*\tVersion: 1.0\t\t\t\t\t\t\t\t*" << endl;
cout << "*\t\t\t\t\t\t\t\t\t\t*" << endl;
cout << "*\tDriver designed to test full functionality and limits of base\t\t*" << endl;
cout <<	"*\tclass SequenceEnum and derived classes SeqExtract and SpasEnum.\t\t*"<< endl;
cout <<	"*\tALL public methods will be tested for each class type, with a\t\t*" << endl;
cout <<	"*\trandom distribution of objects and insuring all objects remiain\t\t*" << endl;
cout <<	"*\tdistinct. All state transitions will be tested, while adhering to\t*" << endl;
cout <<	"*\tthe contract and invariants set forth by each class, respectively.\t*" << endl;
cout << STAR << endl;

}
