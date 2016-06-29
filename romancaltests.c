#include "Roman.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#define Equal 	0
void RomanNumeralCalculatorOneplusOne(void) {
	char str1[] = "I";
	char str2[] = "I";
	char strres[] = "II";
	assert(strcmp(strres,add(str1,str2))==Equal);
	
 }
int main(void) {
	RomanNumeralCalculatorOneplusOne();
	puts("All tests passed");
	return 0;
 }
