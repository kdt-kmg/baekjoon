#include<stdio.h>
#include<math.h>

int main(void)
{
	char arr[100];
	int a;
	int sum = 0;

	scanf("%d", &a);
	scanf("%s", arr);
	
	for (int i = 0; i <= a; i++)
	{
		sum += arr[i] % (16 * 3);
	}

	printf("%d", sum);

}