#include<stdio.h>

int main(void)
{
	int arr[9];
	int i;
	int MAX=0;
	int index;

	for (i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}


	for (i = 0; i < 9; i++)
	{
		if (arr[i] >MAX)
		{
			MAX = arr[i];
			index = i;
		}

	}
	printf("%d\n", MAX);
	printf("%d", index+1);

}