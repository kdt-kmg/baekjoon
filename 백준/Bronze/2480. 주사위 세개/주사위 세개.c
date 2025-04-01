#include<stdio.h>

int main(void)
{
	int A, B, C;
	int arr[3];
	int i;
	int same=0;

		scanf("%d %d %d", &arr[0],&arr[1],&arr[2]);


	A = arr[0];
	B = arr[1];
	C = arr[2];
	
	for (i = 0; i < 3; i++)
	{
		if (arr[i] > same)
		{
			same = arr[i];
		}

	}


	if (A == B && B == C)
	{
		printf("%d", 10000 + (A * 1000));
	}
	else if ((A == B &&B!=C))
	{
		printf("%d", 1000+ (A * 100));
	}
	else if (A != B && B == C)
	{
		printf("%d", 1000+ B * 100);
	}
	else if (A == C && B != C)
	{
		printf("%d", 1000+ C * 100);
	}

	else if (A != B && B != C)
	{
		printf("%d",same * 100);
	}
		
	return 0;
	

}