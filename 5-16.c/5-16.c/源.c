#include<stdio.h>
int main()
{
	int i, j;
	int arr[13][7] = { {1,1,1,0,1,1,1},{1,1,0 ,0,0,1,1},{1,0,0,0,0,0,1},{0,0,0,0,0,0,0},{1,0,0,0,0,0,1},{1,1,0 ,0,0,1,1},{1,1,1,0,1,1,1} };
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			if (arr[i][j] == 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}