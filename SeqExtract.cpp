// Author: Damien Sudol
// Filename: SeqExtract.cpp
// Date: 11/08/17
// Version: 1.0

#include "SeqExtract.h"



SeqExtract::SeqExtract(string word)
	:SequenceEnum(word)
{

}	
	
string SeqExtract::getSubSequence(string subSeq)
{
if(word == subSeq)
	return subSeq;

int subSeqSize = subSeq.size();
int wordSize = word.size();

if(subSeqSize > wordSize)
	return "Word Too Long";

int subStringEndSize = wordSize - subSeqSize;
string subStringEnd = word.substr(subStringEndSize, wordSize);
string subStringStart = word.substr(0 , subStringEndSize);
bool subStringFound = false;


for(int i = 0; i < subSeqSize; i++)
{
 if(subSeq[i] != subStringEnd[i]){
	subStringFound = false;
	break;
}
	return subStringStart;

}




for(int i = 0; i < subSeqSize; i++)
{
 if(subSeq[i] != word[i])
{
	subStringFound = false;
	break;
}
	return subStringEnd;

}


return ("No substring detected ");
}	

