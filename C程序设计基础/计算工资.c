#include<stdio.h>
int main(){
	
	int year,time;
	double money;
	scanf("%d%d",&year,&time);
	if (year<5){
		if (time<=40){
			money=30*time;
		}
		else{
			money=30*40+45*(time-40);
		}
	}
	else{
		if (time<=40){
			money=50*time;
		}
		else{
			money=50*40+75*(time-40);
		}
	}
	
	printf("%.2lf",money);
	return 0;
	
}


	
