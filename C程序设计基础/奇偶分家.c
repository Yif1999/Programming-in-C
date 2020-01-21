#include<stdio.h>
int main()
{
	int N,n,ou,ji,i;
	scanf("%d",&N);
	ou=0;
	ji=0;
	for (i=1;i<=N;i++){
		scanf("%d",&n);
		if (n%2==1){
			ji=ji+1;
		}
		else{
			ou=ou+1;
		}
	}
	printf("%d %d",ji,ou);
	return 0;
}