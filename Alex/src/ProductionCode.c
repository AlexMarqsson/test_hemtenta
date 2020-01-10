/*	ProductionCode.c
 * 	Functions file for tenta assignment
 * 	multiplyNumbers(), areaCalculationThreeDimensional() and 
 * 	circumferenceCalculation() are target functions for unity testing
 *	By: Alex Markusson
 *	2020-01-08
 *								 		*/

#include "ProductionCode.h"

//Function simply takes two numbers and return them multiplied with eachother
int multiplyNumbers(int width, int length){
	return length*width;
}

//Function which takes width, length and height of a box, calculates
//and returns the restriction area 
int areaCalculationThreeDimensional(int width, int length, int height){
	int result = 0;
	result += width*length;
	result += width*height;
	result += length*height;
	return 2*result;
}

//Function which takes two sides of a rectangle and 
//calculates and returns the circumference
int circumferenceCalculation(int width, int length){
	return((2*length)+(2*width));
}
