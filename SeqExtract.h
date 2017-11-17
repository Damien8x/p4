// Author: Damien Sudol
// Filename: SeqExtract.h
// Date: 11/08/17
// Version: 1.0

#ifndef SEQEXTRACT_H
#define SEQEXTRACT_H

#include "SequenceEnum.h"
#include <iostream>
#include <string>

//Description: Child class of SequenceEnum, inheriting functionality while  suppressing
//SequenceEnum.getVariant().  Functionality provided by SequenceEnum includes 
//guessWord(string), which returns a boolean, comparing encapsulated word with string argument.
//getWord(), inherited from SequenceEnum returns encapsulated word. Class provides unique
//functionality through getVariant(string), another layer aiding in the pattern recognition test.
//
//Assumptions: Class is designed as a derived class for a pattern recognition test,
//inheriting functionality necessary for identification of an encapsulated word,
//ability to retrieve the encapsulated word, as well as a function to be incorporated
//into the pattern recognition test. 
//
//	*State Transitions*
//
//Constructor()                                     -> ON
//Constructor()         -> getVariant(string)    ON -> ON
//Constructor()         -> guessWord(string)     ON -> ON
//Constructor()         -> getWord()             ON -> ON
//getVariant(string)    -> guessWord(string)     ON -> ON
//getVariant(string)    -> getWord()             ON -> ON
//guessWord(string)     -> getVariant(string)    ON -> ON
//guessWord(string)     -> getWord()             ON -> ON
//getWord()             -> getVariant(string)    ON -> ON
//getWord()             -> guessWord(string)     ON -> ON 

  
using namespace std;
   
//SeqExtract class inherits SequenceEnum
class SeqExtract: public SequenceEnum
{
public:

//Description: Constructor of SeqExtract object. String parameter must be
//a minimum of three characters or initialization of object will fail. If
//argument is a valid string of more than 2 characters state of object will
//be ON.
//precondition: NA
//postcondition: provided parameter is valid, object is ON
SeqExtract(string);

//Description: returns a string variant of encapsulated word if provided
//with a subsequence of encapsulated word as the argument. string variant
//returned is a subsequence of all other characters not provided in argument
//precondition: ON
//postcondition: ON
string getVariant(string);	

private:

//Description: suppresion of getVariant() method inherited from SequenceEnum class.
void getVariant();

protected:


};


#endif
