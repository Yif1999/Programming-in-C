#include<stdio.h>
#include<math.h>
int main()
{
	int sum,n,i;
	scanf("%d",&n);
	sum=0;
	for (i=1;i<=n;i++){
		sum=pow(2,i)+sum;
	}
	printf("result = %d",sum);
	return 0;
}