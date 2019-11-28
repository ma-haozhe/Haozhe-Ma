// programming ass week6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>;//for the islower stuff


void main()
{
	char string1[] = "ep0dGsBnmrfiO78v4jBg";
	char string2[] = "lhauhQPKRv1IhueSqF8j";
	char string3[] = "rSFffhMredFrXGPMzqy0";

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	int num6 = 0;
	int num7 = 0;
	int num8 = 0;
	int num9 = 0;

	printf("the original strings are:\n");
	printf("string 1 = %s\n", string1);
	printf("string 2 = %s\n", string2);
	printf("string 3 = %s\n\n\n", string3);

	for (int i = 0; i < 20; i++)
	{
		if (isdigit(string1[i]))//can we use switch case in here?
		{
			string1[i] = '*';
			num1++;
		}
		else if (isupper(string1[i]))
		{
			//putchar(tolower(string1[i]));//or we can use strupr?
			string1[i] = string1[i] + 32;
			num2++;
		}
		else if (islower(string1[i]))
		{
			//putchar(toupper(string1[i]));//strlwr()?
			string1[i] = string1[i] - 32;
			num3++;
		}
	}

	for (int i = 0; i < 20; i++)
	{
		if (isdigit(string2[i]))//can we use switch case in here?
		{
			string2[i] = '*';
			num4++;
		}
		else if (isupper(string2[i])/* == 0  REMEMBER TO CANCEL THESE*/)
		{
			//putchar(tolower(string2[i]));//or we can use strupr?
			string2[i] = string2[i] + 32;
			num5++;
		}
		else if (islower(string2[i]))
		{
			//putchar(toupper(string2[i]));//strlwr()?
			string2[i] = string2[i] - 32;
			num6++;
		}
	}

	for (int i = 0; i < 20; i++)
	{
		if (isdigit(string3[i]))//can we use switch case in here?
		{
			string3[i] = '*';
			num7++;
		}
		else if (isupper(string3[i]))
		{
			//putchar(tolower(string3[i]));//or we can use strupr?
			string3[i] = string3[i] + 32;
			num8++;
		}
		else if (islower(string3[i]))
		{
			//putchar(toupper(string3[i]));//strlwr()?
			string3[i] = string3[i] - 32;
			num9++;
		}
	}

	printf("the new strings are:\n");

	printf("string1 = %s\n", string1);
	printf("%d digits to star, ", num1);
	printf("%d to lower, ", num2);
	printf("%d to upper.\n", num3);

	printf("string2 = %s\n", string2);
	printf("%d digits to star, ", num4);
	printf("%d to lower, ", num5);
	printf("%d to upper.\n", num6);

	printf("string3 = %s\n", string3);
	printf("%d digits to star, ", num7);
	printf("%d to lower, ", num8);
	printf("%d to upper.\n", num9);
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
