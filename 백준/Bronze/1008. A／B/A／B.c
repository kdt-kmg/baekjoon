#include<stdio.h>

int main(void)
{
    int A,B;
    scanf("%d %d",&A,&B);
    double C= ((double)A/(double)B);
    
    printf("%.9lf",C);
    return 0;
}