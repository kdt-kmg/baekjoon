#include<stdio.h>

int main(void)
{
	int N, M;
	int z;
	int i, j, k;
	int c;
	int arr[100];

	scanf("%d %d", &N, &M);

	for (i = 0; i < 100; i++)
	{
		arr[i] = 0;
	}
	
	for (z = 0; z < M; z++)
	{
		scanf(" %d %d %d", &i, &j, &k);
		for (c = i; c <= j; c++)
		{
			arr[c] = k;
		}
	}

	for (i = 1; i <=N; i++)
	{
		printf("%d ", arr[i]);
	}
}