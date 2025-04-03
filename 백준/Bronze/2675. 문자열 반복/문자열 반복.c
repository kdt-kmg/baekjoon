#include<stdio.h>

int len(char arr[])
{
	int c = 0;

	while (1)
	{
		if (arr[c] == '\0')
		{
			return c;
		}
		c++;
	}
}

int main(void)
{
	int i,j,n,z,m;
	int lenth;

	char arr[21];

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d %s", &m, arr);
		lenth = len(arr);

		for (j = 0; j < lenth; j++)
		{
			for (z = 0; z < m; z++)
			{
				printf("%c", arr[j]);
			}

		}
		printf("\n");
	}
}