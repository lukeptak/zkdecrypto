#ifndef _STR_ARRAY_H_
#define _STR_ARRAY_H_

#include <string.h>
#include <math.h>

#define MAX_STRINGS 1024

#define NUM_ROWS(C,R) (C%R? (C/R)+1:(C/R))

class StringArray
{
	public:
		StringArray() {num_strings=0; Clear();}
		~StringArray() {Clear();}

		int AddString(const char*);
		int DeleteString(int);
		int GetString(int,char*);
		int SortString(int);
		void SortStrings(int);
		int RemoveDups();
		int Intersect(char*,float);
		int GetNumStrings() {return num_strings;}
		void Clear();
	
	private:
		char *strings[MAX_STRINGS];
		int num_strings;
};

int GetUniques(const char*, char*, int*);
float IoC(const char*);
float Entropy(const char*);
float ChiSquare(const char*);
void Transform(char*,unsigned long*,int);
void FlipHorz(unsigned long*,int&,int,int);
void FlipVert(unsigned long*,int&,int,int);

#endif

