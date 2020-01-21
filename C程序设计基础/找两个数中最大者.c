#include <stdio.h>
float f(int n);
int main()
{
	int n,i;
	float s;
	scanf("%d",&n);
	s=0;
	for (i=1;i<=n;i++){
		s=s+f(i);
	}
	s=s+1;
	printf("%.8lf",s);
	return 0;
}
float f(int n){
	int j;
	float ans;
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