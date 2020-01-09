/*	ProductionCode.c
 * 	Functions file for tenta assignment
 * 	multiplyNumbers(), areaCalculationThreeDimensional() and 
 * 	circumferenceCalculation() are target functions for unity testing
 *	By: Alex Markusson
 *	2020-01-08
 *								 		*/

#include "ProductionCode.h"

//Function simply takes two numbers and return them multiplied with eachother
int multiplyNumbers(int width, int length)
{
	return length*width;
}

//Function which takes width, length and height of a box, calculates
//and returns the restriction area 
int areaCalculationThreeDimensional(int width, int length, int height)
{
	int result = 0;
	result += width*length;
	result += width*height;
	result += length*height;
	return 2*result;
}

//Function which takes two sides of a rectangle and 
//calculates and returns the circumference
int circumferenceCalculation(int width, int length)
{
	return((2*length)+(2*width));
}

//Function for handling the menu and calculation choice from user
int menu(){
	std::cin.clear();
	int choice = 0;
	printf("What would you like to calculate?\n");
	printf("Enter 1 for circumference..\n");
	printf("Enter 2 for Area..\n");
	printf("Enter 3 for Volume..\n");
	printf("Enter 4 for termination of program\n\n");
	printf("Choice: ");
	std::cin >> choice;

	while(std::cin.fail() || choice > 4 || choice < 1){
		printf("Invalid input, try again..");
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> choice;
	}

	return choice;
}

//Function handling users choice of 2D or 3D object
bool threeDChoice(){
	std::cin.clear();
	int choice = 0;
	printf("Would you like to calculate a 2D or 3D object?\n");
	printf("Enter 0 for 2D object..\n");
	printf("Enter 1 for 3D object..\n\n");
	printf("Choice: ");
	std::cin >> choice;

	while(std::cin.fail() || choice < 0 || choice > 1){
		printf("Invalid input, try again..");
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> choice;
	}

	return choice;
}

//Function handling and limiting measurement input from user
int valueInput(){
	std::cin.clear();
	int value = 0;
	std::cin >> value;

	while(std::cin.fail() || value < 1 || value > 999){
		printf("Invalid value, try again..");
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> value;
	}

	return value;
}
