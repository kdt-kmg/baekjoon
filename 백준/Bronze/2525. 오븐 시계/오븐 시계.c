#include <stdio.h>

int main(void)
{
	int h, m, oven;
	int all;

	scanf("%d %d", &h, &m);
	scanf("%d", &oven);


	all = (h * 60) + m + oven;


	h = all / 60;
	if (h >=24)
	{
		h = h - 24;
	}
	m = all % 60;

	printf("%d %d", h, m);

	return 0;
}