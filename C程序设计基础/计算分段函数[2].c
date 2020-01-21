#include<stdio.h>
#include<math.h>
int main()
{
	double x,y;
	scanf("%lf",&x);
	if (x>=0){
		y=sqrt(x);
	}
	else{
		y=pow((x+1),2)+2*x+1/x;
	}
	printf("f(%.2lf",x);
	printf(") = %.2lf",y);
	return 0;
}