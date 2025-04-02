#include<stdio.h>

int main(void)
{
	int N; // N은 시험 개수, M은 최고 점수
	int Max = 0;
	int i;
	double subject[1000] = { 0 };
	double all=0;
	
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%lf", &subject[i]);
    }

	for (i = 0; i < N; i++)
	{
		if (subject[i] >= Max)
		{
			Max = subject[i];
		}
	}
	
		for (i = 0; i < N; i++)
		{
			all += (subject[i] / Max * 100);
		}
	
	printf("%lf", all/N);
}