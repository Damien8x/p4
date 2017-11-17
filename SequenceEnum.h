// Author: Damien Sudol
// Filename: SequenceEnum
// Date: 11/08/17
// Version: 1.0



#ifndef SEQUENCEENUM_H
#define SEQUENCEENUM_H

#include <iostream>
#include <string>

//Description: Base class, encapsulates one word with a minimum length of
//three characters, available to derived classes. Class provides functionality
//for returning a manimulation of encapsulated word, a boolean for comparing 
//a passed argument to encapsulated word, as well as returning the encapuslated
//word itself.

//Assumptions: Class is designed as a base class for a pattern recognition test,
//providing necessary functionality for identification of an encapsulated word,
//ability to retrieve the encapsulated word, as well as a function to be incorporated
//into the pattern recognition test. All attributes and functions are designed to be
//inherited, utilized or overridden by derived classes, producing an IS-A relationship.

//	*State Transitions*
//
//Constructor() 			       	    -> ON
//Constructor()		-> getVariant()		 ON -> ON
//Constructor()		-> guessWord(string)	 ON -> ON
//Constructor()		-> getWord()		 ON -> ON
//getVariant() 		-> guessWord(string)	 ON -> ON
//getVariant()		-> getWord()		 ON -> ON
//getVariant()		-> getVariant()		 ON -> ON
//guessWord(string) 	-> getVariant()		 ON -> ON
//guessWord(string) 	-> getWord()		 ON -> ON
//guessWord(string)	-> guessWord(string)	 ON -> ON
//getWord()		-> getWord()		 ON -> ON
//getWord()   		-> getVariant()		 ON -> ON
//getWord()   		-> guessWord(string)	 ON -> ON  

using namespace std;

class SequenceEnum
{
public:

//Description: Constructor of SequenceEnum object. String parameter must be
//a minimum of three characters or inittialization of object will fail. If
//argument is a valid string of more than 2 characters state of object will
//be ON.
//precondition: NA
//postcondition: provided parameter is valid, object is ON
SequenceEnum(string);

//Description: Virtual function returns a string variant of encapsulated word.
//New string may contain one or many repeating characters from attribute word,
//as well as all characters of word in same sequence relative to charactes in " word".
//Attribute word not impacted by function. Attribute wordVariant will be mutated
//and set back to original value before method ends.
//precondition: object "ON"
//postcondition object "ON"
virtual string getVariant();

//Description: Returns true if passed argument is equal to encapsulated word.
//precondition: object "OM"
//postcondition: object "ON"
bool guessWord(string) const;

//Description: Regturns encapsulated word.
//precondition: object "ON"
//postcondition: object "ON"
string getWord() const;


private:
string wordVariant;

string recursiveVariant();

protected:
string word;


};




#endif
