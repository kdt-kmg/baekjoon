#include<stdio.h>

int main(void)
{
	int n, m;
	int x, y;
	int N[100];// 바구니
	int i,j;
	int re;
	int temp;

	for (i =0; i<=100; i++ )
	{
		N[i] = i;
	}

	scanf("%d %d", &n, &m);
	
	
	for (i = 0; i < m; i++)
	{
		scanf("%d %d", &x, &y);
		for (j = 0; j <n; j++)
		{
			if ((x+j)< (y-j))
			{
				temp = N[x+j];
				N[x+j] = N[y-j];
				N[y-j] = temp;
			}
		}


	}


	for (i = 1; i <= n; i++)
	{
		printf("%d ", N[i]);
	}

}