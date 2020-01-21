#include <stdio.h>
 
double factorial(int n);
 
int main(){
 
	int n,m;
	double result;
 
	scanf("%d %d", &m, &n);
 
	result=factorial(n)/(factorial(m)*factorial(n-m));
 
	printf("result = %.0lf\n", result);
 
	return 0;
}
 
double factorial(int n){
	
	if(n<=1)
		return 1;
	return n*factorial(n-1);
}
