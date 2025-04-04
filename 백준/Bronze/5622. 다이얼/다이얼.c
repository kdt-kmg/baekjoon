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
	char arr[16];
	int lenth;
	int i;
	int sum = 0;

	scanf("%s",arr);
	lenth = len(arr);

	for (i = 0; i < lenth; i++)
	{
		if (arr[i] == 'A' || arr[i] == 'B' || arr[i] == 'C')
		{
			sum += 2;
		}
		else if (arr[i] == 'D' || arr[i] == 'E' || arr[i] == 'F')
		{
			sum += 3;
		}
		else if (arr[i] == 'G' || arr[i] == 'H' || arr[i] == 'I')
		{
			sum += 4;
		}
		else if (arr[i] == 'J' || arr[i] == 'K' || arr[i] == 'L')
		{
			sum += 5;
		}
		else if (arr[i] == 'M' || arr[i] == 'N' || arr[i] == 'O')
		{
			sum += 6;
		}
		else if (arr[i] == 'P' || arr[i] == 'Q' || arr[i] == 'R'|| arr[i] == 'S')
		{
			sum += 7;
		}
		else if (arr[i] == 'T' || arr[i] == 'U' || arr[i] == 'V')
		{
			sum += 8;
		}
		else if (arr[i] == 'W' || arr[i] == 'X' || arr[i] == 'Y' || arr[i] == 'Z')
		{
			sum += 9;
		}

	} 
	
	printf("%d", sum + lenth);

}