#include<stdio.h>
int main(){
	double s,m;
	int n,t;
	scanf("%lf%d",&s,&t);
	if (s<=3){
		m=10;
	}
	else if (s<=10){
		m=10+(s-3)*2;
	} 
	else{
		m=10+7*2+(s-10)*3;
	}
	n=t/5;
	m=m+n*2;
	printf("%.0lf",m);
	return 0;
} 