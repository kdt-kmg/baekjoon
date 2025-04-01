#include<stdio.h>

int main(void)
{
	int N, M;
	int z;
	int i, j;
	int arr[100];
	int temp;

	for (i = 0; i <= 100; i++)
	{
		arr[i] = i;
	}
	i = 0;

	scanf("%d %d", &N, &M);

	
	for (z = 0; z < M; z++)
	{
		scanf("%d %d", &i, &j);
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;	
		temp = 0;
	}

	for (i = 1; i <=N; i++)
	{
		printf("%d ", arr[i]);
	}
}