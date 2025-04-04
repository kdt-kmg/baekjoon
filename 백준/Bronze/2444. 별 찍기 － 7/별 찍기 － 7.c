
#include<stdio.h>


int main(void)
{
	int i, j ;
	int a;
	scanf("%d", &a);

	for (i = 0; i < a-1; i++)
	{
		for (j = 1; j < 2 * a; j++)
		{
			if (((j >= (a - i))&(j <= (a + i))))
			{
				printf("*");
			}
			else if (a-i>j)
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	for (i = 0; i < ((2 * a) - 1); i++)
	{
		printf("*");
	}
	printf("\n");
	

	for (i = a-1; i >0; i--)
	{
		for (j = 1; j < 2 * a; j++)
		{
			if (((j > (a - i))&(j < (a + i))))
			{
				printf("*");
			}

			else if (a-i>=j)
			{
				printf(" ");
			}
		}
		printf("\n");

	}

}

	
