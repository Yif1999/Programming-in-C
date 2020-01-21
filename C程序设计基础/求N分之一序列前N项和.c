#include<stdio.h>
int main()
{
	double i,N,S;
	scanf("%lf",&N);
	S=0;
	for (i=1;i<=N;i++)
		S=1/i+S;
	printf("sum = %.6f",S);
	return 0;
} 