#include<stdio.h>


int main(void)
{
	int arr_1[6] = {1,1,2,2,2,8};
	int input[6];
	int i;

	scanf("%d %d %d %d %d %d", &input[0], &input[1], &input[2], &input[3], &input[4], &input[5]);
	

	for (i = 0; i < 6; i++)
	{
		input[i] = arr_1[i] - input[i];
	}
	for (i = 0; i < 6; i++)
	{
		printf("%d ", input[i]);
	}

	
}
