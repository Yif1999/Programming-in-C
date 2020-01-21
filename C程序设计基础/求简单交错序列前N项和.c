#include<stdio.h>
#include<math.h>
int main(){
	int n,i,m;
	double s;
	s=0;m=1;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		s=s+pow((-1),(i+1))*1/m;
		m=m+3;
		
	}
	printf("sum = %.3lf",s);
	return 0;
} 