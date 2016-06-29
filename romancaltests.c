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
void RomanNumeralCalculatorOneplusTwo(void) {
	char str1[] = "I";
	char str2[] = "II";
	char strres[] = "III";
	assert(strcmp(strres,add(str1,str2))==Equal);
	
 }
void RomanNumeralCalculatorTwoplusTwo(void) {
	char str1[] = "II";
	char str2[] = "II";
	char strres[] = "IV";
	assert(strcmp(strres,add(str1,str2))==Equal);
 }
void RomanNumeralCalculatorTwoplusNine(void) {
	char str1[] = "II";
	char str2[] = "IX";
	char strres[] = "XI";
	assert(strcmp(strres,add(str1,str2))==Equal);
	puts(str1);
 }
int main(void) {
	RomanNumeralCalculatorOneplusOne();
	RomanNumeralCalculatorOneplusTwo();
	RomanNumeralCalculatorTwoplusTwo();
	RomanNumeralCalculatorTwoplusNine();
	puts("All tests passed");
	return 0;
 }
