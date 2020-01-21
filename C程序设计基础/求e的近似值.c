#include <stdio.h>
double f(int n);
int main()
{
	int n,i;
	double s,a;
	scanf("%d",&n);
	s=0;
	for (i=1;i<=n;i++){
		a=f(i);
		s=s+a;
	}
	s=s+1;
	printf("%.8f",s);
	return 0;
}
double f(int n){
	int j;
	double ans;
	if (n==0){
	
		ans=1;
	}
	else{
		ans=1;
		for (j=1;j<=n;j++){
			ans=ans*j;
		}
	}
	ans=1/ans;
	return ans;
	
}