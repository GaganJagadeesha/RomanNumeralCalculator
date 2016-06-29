#include "Roman.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#define Equal 	0
#define MAXIMUM_LENGTH	4096
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
 }
void RomanNumeralCalculatorTenplusThirty(void) {
	char str1[MAXIMUM_LENGTH] = "X";
	char str2[MAXIMUM_LENGTH] = "XXX";
	char strres[MAXIMUM_LENGTH] = "XL";
	assert(strcmp(strres,add(str1,str2))==Equal);
 }
void RomanNumeralCalculatorHundredplusNinety(void) {
	char str1[MAXIMUM_LENGTH] = "C";
	char str2[MAXIMUM_LENGTH] = "XC";
	char strres[MAXIMUM_LENGTH] = "CXC";
	assert(strcmp(strres,add(str1,str2))==Equal);
 }
void RomanNumeralCalculatorFiveHundredThirtySixplusNinetyEight(void) {
	char str1[MAXIMUM_LENGTH] = "DXXXVI";
	char str2[MAXIMUM_LENGTH] = "XCVIII";
	char strres[MAXIMUM_LENGTH] = "DCXXXIV";
	assert(strcmp(strres,add(str1,str2))==Equal);
 }
void RomanNumeralCalculatorOneThousandFiveHundredplusOneThousandOneHundered(void) {
	char str1[MAXIMUM_LENGTH] = "MD";
	char str2[MAXIMUM_LENGTH] = "MC";
	char strres[MAXIMUM_LENGTH] = "MMDC";
	assert(strcmp(strres,add(str1,str2))==Equal);
 }
void RomanNumeralCalculatorThreeMinusOne(void) {
	char str1[] = "III";
	char str2[] = "I";
	char strres[] = "II";
	assert(strcmp(strres,subtract(str1,str2))==Equal);
 }
void RomanNumeralCalculatorTenMinusOne(void) {
	char str1[] = "X";
	char str2[] = "I";
	char strres[] = "IX";
	assert(strcmp(strres,subtract(str1,str2))==Equal);
 }
int main(void) {
	RomanNumeralCalculatorOneplusOne();
	RomanNumeralCalculatorOneplusTwo();
	RomanNumeralCalculatorTwoplusTwo();
	RomanNumeralCalculatorTwoplusNine();
	RomanNumeralCalculatorTenplusThirty();
	RomanNumeralCalculatorHundredplusNinety();
	RomanNumeralCalculatorFiveHundredThirtySixplusNinetyEight();
	RomanNumeralCalculatorOneThousandFiveHundredplusOneThousandOneHundered();
	RomanNumeralCalculatorThreeMinusOne();
	RomanNumeralCalculatorTenMinusOne();
	puts("All tests passed");
	return 0;
 }
