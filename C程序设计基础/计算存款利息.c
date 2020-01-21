#include<stdio.h>
#include<math.h>
int main()
{
	/*int money,year;*/
	float rate,interest,money,year;
	scanf("%f %f %f",&money,&year,&rate);
	interest=money*pow(1+rate,year)-money;
	printf("interest = %.2f",interest);
	return 0;
} 