#include<stdio.h>
int main()
{
	double x,y;
	scanf("%lf",&x);
	if (x!=0){
		y=1/x;
	}
	else{
		y=0;
	}
	printf("f(%.1lf",x);
	printf(") = %.1lf",y);
	return 0;
}