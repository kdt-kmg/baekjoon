#include<stdio.h>
int arr[1000000];

int main(void)
{
	int a;
	
	int min = 0;
	int max = 0;
	int i,j;

	scanf("%d", &a);

	for (i = 0; i < a; i++)
	{

		scanf("%d", &arr[i]);

	}
min= arr[0];
max= arr[0];
    
	for (i = 1; i < a ; i++)
	{
	    if(min>arr[i])
        {
            min=arr[i];
        }
        if(max<arr[i])
        {
            max=arr[i];
        }
	    
	}

	

	printf("%d %d", min, max);
	return 0;
}  