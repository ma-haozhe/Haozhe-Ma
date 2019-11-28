// programming week 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>


double calculateArea(double height, double width)
{
	return (height * width);
}
double calculatePaint(double area, int numCoats, double m2PerLitre)
{
	return (area * numCoats) / m2PerLitre;
}

void main()
{
	double height, width, area, m2PerLitre, litreNeeded;
	double windowArea = 0.0;
	char choice='y';
	int numCount, numCoats;
	area = 0;

	do 
	{
		printf("Entre the height of of the wall<m>: ");
		scanf_s("%lf", &height);
		printf("\nEntre the width of the wall<m>: ");
		scanf_s("%lf", &width);
		area += calculateArea(height, width);
		printf("\n more walls? y/n");
		scanf_s(" %c", &choice);
	}
	while (choice == 'y');
	printf("Total wall area is %lf \n", area);

	printf("How many doors do you have?\n");
	scanf_s("%d", &numCount);
	area = area - (2 * numCount);
	printf("The area minus doors is %lf\n", area);


	printf("You got a window? y/n");
	scanf_s(" %c", &choice);
	if (choice == 'y')
	{
		do 
		{
			printf("\n what is the height of the window?");
			scanf_s("%lf", &height);
			printf("\n what is the width of the window?");
			scanf_s("%lf", &width);
			windowArea += calculateArea(width, height);
			printf("\nDo you have more than one window? y/n");
			scanf_s(" %c", &choice);
		} while (choice == 'y');
		printf("\n total window(s) area is %lf.", windowArea);
		area = area - windowArea;
		printf("The area minus windows is %lf \n", area);
	}


	printf("What is the coverage in m2 per litre of your paint?:");
	scanf_s("%lf", &m2PerLitre);
	printf("\nHow many coats do you want?:");
	scanf_s("%d", &numCoats);
	litreNeeded = calculatePaint(area, numCoats, m2PerLitre);
	printf("You will need %lf litre(s) or %d of paint.", litreNeeded, (int)litreNeeded);

	
	

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
