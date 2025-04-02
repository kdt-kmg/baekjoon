#include<stdio.h>

int main(void)
{
	int i, j;
	int cnt = 0;
	int empty = -33;

	int arr[10];


	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i <= 9; i++)
	{
		arr[i] = arr[i] % 42;
	}


	for (i = 0; i <= 9; i++)
	{
		for (j = i+1; j <= 9; j++)
		{
			if (arr[i] == arr[j])
				arr[i] = empty;
		}
	}



	for (i = 0; i <= 9; i++)
	{
		if (arr[i] >=0)
			cnt++;
	}

	if (cnt == 0)
		cnt = 1;


	printf("%d", cnt);

}
