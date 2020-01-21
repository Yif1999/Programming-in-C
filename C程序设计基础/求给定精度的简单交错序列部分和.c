#include<stdio.h>
int main(){
	double a=-1,b=-2,c,i=0;
	scanf("%lf",&c);
	do{
		a=-a;
		b=b+3;
		i=i+a*1.0/b;
	}while(1.0/b>c);
	printf("sum = %.6lf",i);
	return 0;
	
}