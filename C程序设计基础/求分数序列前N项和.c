#include<stdio.h>
int main(){
	int n,i;
	double s=0.0,c=1.0,d=2.0,t;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		s=s+d/c;
		t=c;
		c=d;
		d=d+t;
		
	}
	printf("%.2lf",s);
	return 0;
}