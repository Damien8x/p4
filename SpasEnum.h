// Author: Damien Sudol
// Filename: SpasEnum.h
// Date: 11/08/17
// Version: 1.0

#ifndef SPASENUM_H
#define SPASENUM_H

#include "SequenceEnum.h"
#include <iostream>
#include <string>

//Description: Child class of SequenceEnum, inheriting functionality while overriding
//SequenceEnum.getVariant().  Functionality provided by SequenceEnum includes 
//guessWord(string), which returns a boolean, comparing encapsulated word with string argument.
//getWord(), inherited from SequenceEnum returns encapsulated word. Class provides unique
//functionality through getVariant(), another layer aiding in the pattern recognition test.
//SpasEnum relationship with SequenceEnum allows for polymorphism and the ability for full
//functionality of the SpasEnum object through a base class object pointing at a Spasenum object.
//This allows for collections of SpasEnum and SequenceEnum objects through SequenceEnum pointers
//while retaining their respective functionality.
//
//Assumptions: Class is designed as a derived class for a pattern recognition test,
//inheriting functionality necessary for identification of an encapsulated word,
//ability to retrieve the encapsulated word, as well as a function to be incorporated
//into the pattern recognition test. 
//
//      *State Transitions*
//
//Constructor()                                     -> ON
//Constructor()         -> getVariant()   	 ON -> ON
//Constructor()         -> guessWord(string)     ON -> ON
//Constructor()         -> getWord()             ON -> ON
//getVariant()   	-> guessWord(string)     ON -> ON
//getVariant()   	-> getWord()             ON -> ON
//getVariant()		-> getVariant()		 ON -> ON
//guessWord(string)     -> getVariant()   	 ON -> ON
//guessWord(string)     -> getWord()             ON -> ON
//guessWord(string)	-> guessWord(string)	 ON -> ON
//getWord()             -> getVariant() 	 ON -> ON
//getWord()             -> guessWord(string)     ON -> ON
//getWord()		-> getWord()		 ON -> ON 



using namespace std;

//SpasEnum class inherits SequenceEnum
class SpasEnum: public SequenceEnum
{
public:

//Description: Constructor of SpasEnum object. String parameter must be
//a minimum of three characters or initialization of object will fail and program will crash. 
//If argument is a valid string of more than 2 characters state of object will
//be ON.
//precondition: NA
//postcondition: provided parameter is valid, object is ON 
SpasEnum(string);

//Description: Overrides inherited SequenceEnum.getVariant() method, adding 
//an additional layer to the pattern recognition test. method returns a string,
//either a concatenation or truncation of encapuslated word. concatenation
//is produced by randomly generating a subsequence of encapsulated word and 
//appending it to itself. 
//precondition: ON
//postcondition: ON
string getVariant();	

private:

string concatenate();
	
string truncate();	

protected:


};


#endif
