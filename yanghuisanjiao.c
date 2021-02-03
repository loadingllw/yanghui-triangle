
#define _CRT_SECURE_NO_WARNINGS 1
#define MAX_ROW 10
#define MAX_COL 10
#include <stdio.h>


int main()
{
	int i = 0;
	int j = 0;
	int arr[MAX_ROW][MAX_COL] = { { 0 } };
	for (i = 0; i < MAX_ROW; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j || j == 0)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i < MAX_ROW; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%-5d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}



//1
//1  1
//1  2  1
//1  3  3  1
//1  4  6  4  1
//1  5  10 10 5  1


//MAX_ROW;

int Pascal_triangle(int i, int j)
{
	if (j == 0 || i == j)
	{
		return 1;
	}
	else
	{
		return Pascal_triangle(i - 1, j - 1) + Pascal_triangle(i - 1, j);
	}
}
int main()
{
	int i = 0;
	int j = 0;
	int arr[MAX_ROW][MAX_COL] = { { 0 } };
	for (i = 0; i < MAX_ROW; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%-5d", Pascal_triangle(i, j));
		}
		printf("\n");
	}
	return 0;
}
