/*	UiFunctions.c
 * 	Functions file for user input files for tenta assignment
 *	By: Alex Markusson
 *	2020-01-10
 *								 		*/
//Function for handling the menu and calculation choice from user

#include "UiFunctions.h"

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

	while (std::cin.fail() || choice > 4 || choice < 1){
		printf("Invalid input, try again..");
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> choice;
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

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

	while (std::cin.fail() || choice < 0 || choice > 1){
		printf("Invalid input, try again..");
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> choice;
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	return choice;
}

//Function handling and limiting measurement input from user
int valueInput(){
	std::cin.clear();
	int value = 0;
	std::cin >> value;

	while (std::cin.fail() || value < 1 || value > 999){
		printf("Invalid value, try again..");
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> value;
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	return value;
}
