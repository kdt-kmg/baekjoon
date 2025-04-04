#include<stdio.h>
#include<math.h>
char num[10000];
int cal[10000];

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

	int x,i,lenth; 
	int index;
	int sum=0;

	scanf("%s %d", num, &x);
	lenth = len(num);

	for (i = 0; i < lenth; i++)
	{
		if(num[i]>='A'&& num[i]<='Z')
		    cal[i] = (int)(num[i]) % 'A'+10;
		else if (num[i] >= '0'&& num[i] <= '9')
			cal[i] = (int)(num[i]) % '0';
	}

	for (i = 0; i < lenth; i++)
	{
		index = (lenth-1) - i;
		sum += cal[index] * (int)pow(x, i);
	}
	printf("%d", sum);
}


