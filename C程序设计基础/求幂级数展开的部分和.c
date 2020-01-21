#include <stdio.h>
#include <math.h>

double fact(double n);
int main(){
  int i=1;
	double sum=1,t,x;
	scanf("%lf", &x);
	do{
		t=pow(x,i)/fact(i);
		sum=sum+t;
		i++;
	}while(t>=0.00001);
	printf("%.4lf", sum);
	return 0;
}

double fact(double n){
	if(n<=1)
		return 1;
	else
		return n*fact(n-1);
}