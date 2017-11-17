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
//It is an important to note suppression of SequenceEnum.getVariant() prevents polymorphism.
//Any base class object pointing to a SequenceEnum object will not allow access to 
//SeqExtract.getVariant(string), but will allow access to the suppressed SequenceEnum.getVariant()
//method, providing the functionality laid out in the SequenceEnum class. Due to this, SeqExtract
//objects should not be accessed through a base class pointer to ensure intended functionality.
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
//getVariant(string)	-> getVariant(string)	 ON -> ON
//guessWord(string)     -> getVariant(string)    ON -> ON
//guessWord(string)     -> getWord()             ON -> ON
//guessWord(string)	-> guessWord(string)	 ON -> ON
//getWord()		-> getWord		 ON -> ON
//getWord()             -> getVariant(string)    ON -> ON
//getWord()             -> guessWord(string)     ON -> ON 

  
using namespace std;
   
//SeqExtract class inherits SequenceEnum
class SeqExtract: public SequenceEnum
{
public:

//Description: Constructor of SeqExtract object. String parameter must be
//a minimum of three characters or initialization of object will fail and program will crash.
//If an argument is a valid string of more than 2 characters state of object will
//be ON.
//precondition: NA
//postcondition: provided parameter is valid, object is ON
SeqExtract(string);

//Description: returns a string variant of encapsulated word if provided
//with a subsequence of encapsulated word as the argument. string variant
//returned is a subsequence of all other characters not provided in argument.
//If no substring is detected message, "no substring detected" will be returned.
//If argument is larger than encapsulated word message, "Word Too Long" will be returned.
//If argument matches encapsulated word message, "Word Match" will be returned.
//precondition: ON
//postcondition: ON
string getVariant(string);	

private:

//Description: suppresion of getVariant() method inherited from SequenceEnum class.
string getVariant();

protected:


};


#endif
