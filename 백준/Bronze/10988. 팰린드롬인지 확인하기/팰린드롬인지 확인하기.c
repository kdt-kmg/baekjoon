#include<stdio.h>

int len(char ar[])
{
	int c = 0;

	for (;;)
	{
		if (ar[c] == '\0')
		{
			goto out;
		}
		c++;
	}
out:;
	return c;
}


int main(void)
{
	char arn[101];
	int lenth;
	int i;
	int answer;

	scanf("%s",arn);
	lenth = len(arn);

	for (i = 0; i <= (lenth / 2); i++)
	{
		if (arn[0 + i] != arn[(lenth - 1) - i])
		{
			answer = 0;
			printf("%d", answer);
			return 0;
		}
		else if (i == (lenth / 2))
		{
			answer = 1;
			printf("%d", answer);
			return 0;
		}

	}

}
