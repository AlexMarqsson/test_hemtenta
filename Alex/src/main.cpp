#include <iostream>
#include "ProductionCode.h"

int main(){

	int choice = 0;
	int width = 0;
	int length = 0;	
	int height = 0;
	int result = 0;
	bool threeDimensional = false;

	while (choice != 4){

		switch (choice){
			case 0:
				width = 0;
				length = 0;
				height = 0;
				choice = menu();

				if (choice == 4){break;}
				threeDimensional = threeDChoice();

				if (threeDimensional == false && choice == 3){
					printf("\n\n***Needs to be a 3D object for Volume***\n\n");
					choice = 0;
					break;
				}
				printf("Enter width(1-999): ");
				width = valueInput();
				printf("\nEnter length(1-999): ");
				length = valueInput();

				if (threeDimensional == true){
					printf("\nEnter height(1-999): ");
					height = valueInput();
				}
				break;
			case 1:
				if (threeDimensional == true){
					printf("Circumference: %d\n%d\n%d\n\n", circumferenceCalculation(width,length), circumferenceCalculation(width,height), circumferenceCalculation(length,height));
				}else{
					result = circumferenceCalculation(width, length);
					printf("Circumference: %d\n\n", result);
				}
				choice = 0;
				break;
			case 2:
				if (threeDimensional == true){
					result = areaCalculationThreeDimensional(width, length, height);
					printf("Restriction area: %d\n\n", result);

				}else{
					result = multiplyNumbers(width, length);
					printf("Area: %d\n\n", result);
				}
				choice = 0;
				break;
			case 3:
				result = multiplyNumbers(multiplyNumbers(width, length), height);
				printf("Volume: %d\n\n", result);
				choice = 0;
				break;
			default:
				choice = 0;
				break;
		}
	}

	return 0;
}
