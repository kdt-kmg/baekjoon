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
	char arr[1000001];
	int cnt = 0;
	int i = 0;
	int lenth;

	scanf("%[^\n]s", arr);
	lenth = len(arr);

	for(i=0; i<lenth; i++)
	{
		if (arr[i] == ' ')
		{
			cnt++;
		}
	}

	if ((arr[lenth-1] == ' '))
		cnt -= 1;
	if (arr[0] == ' ')
		cnt -= 1;


	printf("%d", cnt+1);
}