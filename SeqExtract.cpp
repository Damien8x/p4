// Author: Damien Sudol
// Filename: SeqExtract.cpp
// Date: 11/08/17
// Version: 1.0

#include "SeqExtract.h"



SeqExtract::SeqExtract(string word)
	:SequenceEnum(word)
{

}	


string SeqExtract::getVariant()
{

}
	
string SeqExtract::getVariant(string subSeq)
{
	if(word == subSeq)
		return "Word Match";

	int subSeqSize = subSeq.size();
	int wordSize = word.size();

	if(subSeqSize > wordSize)
		return "Word Too Long";

	int subStringStartSize = wordSize - ( wordSize - subSeqSize);
	int subStringEndSize =wordSize - subSeqSize;
	string subStringEnd = word.substr(subStringStartSize, wordSize);
	string subStringEndSequence = word.substr(subStringEndSize, wordSize);
	string subStringStart = word.substr(0 , subStringEndSize);

	for(int i = 0; i < subSeqSize; i++)
	{
		 if(subSeq[i] != subStringEndSequence[i])
			break;
		return subStringStart;
	}

	for(int i = 0; i < subSeqSize; i++)
	{
		 if(subSeq[i] != word[i])
			break;
		return subStringEnd;
	}

	return ("No substring detected ");
}	

