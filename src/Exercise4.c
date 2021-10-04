/*
4.	Write a program to display a hollow triangle by asterisks (*) on the screen.
The input will be the height of the triangle and the thickness of the borders.
Ex:
 ____________________________________
| Input: 7 2                         |
| Output:                            |
|             *                      |
|           * * *                    |
|         * *   * *                  |
|       * *       * *                |
|     * *           * *              |
|   * * * * * * * * * * *            |
| * * * * * * * * * * * * *          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int height = atoi(argv[1]);
	int border = atoi(argv[2]);
	//Your codes here
	char blank[2] = "  ";
	char asterisk[2] = " *";
	int width = height * 2 - 1;
	int array[height][width];
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	for (int i = 0; i < height; i++)
	{
		
		if (i < border)
		{
			int pos = height - (i + 1);
			for (int j = pos; j <= width - (pos + 1); j++)
			{
				array[i][j] = 1;
			}
		}
		else if (i >= height - border)
		{
			int pos = height - i - 1;
			for (int j = 0 + pos; j < width - pos; j++)
			{
				array[i][j] = 1;
			}
		}
		else
		{
			int breakBlank = 0;
			int pos = height - (i + 1);
			for (int j = 0; j < border; j++)
			{
				array[i][pos + j] = 1;
				array[i][width - (pos + 1) - j] = 1;
			}
		
		}
	}

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (array[i][j] == 1)
			{
				printf(" *");
			}
			else printf("  ");
		}
		printf("\n");
	}

	
	return 0;
}