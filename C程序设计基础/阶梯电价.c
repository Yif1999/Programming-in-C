#include<stdio.h>
int main(){
	double power,money;
	scanf("%lf",&power);
	if (power<=0){
		printf("Invalid Value!");
	} 
	else{
		
	if (power<=50){
		money=0.53*power;
	}
	else{
		money=0.53*50+0.58*(power-50);
	}
	printf("cost = %.2lf",money);
}
	return 0;
}