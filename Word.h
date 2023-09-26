#ifndef WORD_H // replace with relevant names
#define WORD_H
namespace sdds {

	// Your header file content goes here
	int strCmp(const char* s1, const char* s2);
	void trim(char word[]);
	void toLowerCaseAndCopy(char des[], const char source[]);
	void programTitle();
	void wordStats(const char* filename);

}
#endif