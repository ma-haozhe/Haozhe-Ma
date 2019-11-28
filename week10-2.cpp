#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int testNum;
	char string[] = "";
	scanf_s("%d", &testNum);
	for (int i = 1; i <= testNum + 1; i++)
	{
		scanf_s("%c", string);
		for (int c = 0; c <= strlen(string); c = c + 2)
		{
			printf("%c", string[c]);
		}
		printf("  ");
		for (int c = 1; c <= strlen(string); c = c + 2)
		{
			printf("%c\n", string[c]);
		}
	}
	return 0;
}
