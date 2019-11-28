//Haozhe Ma Oct 29 2019

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <cmath>//this for the constant pi, doesnt work

double angle;
char choice = 'y';
char type[5];
double result = 0;
double radius;
double toRadius(double angle)
	{
		return (angle * (3.1415926535 / 180));
	}
void main()
{
	do
	{
		printf("\n ENTER THE CALCULATION USING DEGREES, E.G.\"cos 45\"");//put \ before the quotation as a escape mark.
		scanf("%s %d", type, &angle);
		if (!strcmp("COS", _strupr(type)))
		{
			result = cos(toRadius(angle));
			printf("THE RESULT IS %d \n", result);
			printf("ANOTHER CALCULATION?<Y/N>:\n");
			scanf_s(" %c", &choice);

		}
		else if (!strcmp("SIN", _strupr(type)))
		{
			result = sin(toRadius(angle));
			printf("THE RESULT IS %d", result);
			printf("ANOTHER CALCULATION?<Y/N>:");
			scanf_s(" %c", &choice);
		}
		else if (!strcmp("TAN", _strupr(type)))
		{
			result = tan(toRadius(angle));
			printf("THE RESULT IS %d", result);
			printf("ANOTHER CALCULATION?<Y/N>:");
			scanf_s(" %c", &choice);
		}
	}while (choice == 'y');
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
