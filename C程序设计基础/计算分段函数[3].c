#include<stdio.h>
#include<math.h>
int main()
{
	double x,y;
	scanf("%lf",&x);
	if (x!=10){
		y=x;
	}
	else{
		y=1/x;
	}
	printf("f(%.1lf",x);
	printf(") = %.1lf",y);
	return 0;
}