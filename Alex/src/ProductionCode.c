#include "ProductionCode.h"

// This function is supposed to search through NumbersToFind and find a particular number.  
// If it finds it, the index is returned.  Otherwise 0 is returned which sorta makes sense since 
// NumbersToFind is indexed from 1.  Unfortunately it's broken 
// (and should therefore be caught by our tests)

int multiplyNumbers(int width, int length)
{
	return length*width;
}

int areaCalculationThreeDimensional(int width, int length, int height)
{
	int result = 0;
	result += width*length;
	result += width*height;
	result += length*height;
	return 2*result;
}

int circumferenceCalculation(int width, int length)
{
	return((2*length)+(2*width));
}

int circumferenceCalculationThreeDimensional(int width, int length, int height)
{
	int result = 0;
	result += multiplyNumbers(width, length);
	result += multiplyNumbers(width, height);
	result += multiplyNumbers(length, height);
	return 2*result;
}

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
