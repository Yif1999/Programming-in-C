#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n+1],i,cha,j;
	for (i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int b[n];
	for (i=1;i<=n;i++){
		b[i]=a[i+1]-a[i];
	}
	for (i=1;i<=n-2;i++){
		if (i%3!=0){
			printf("%d ",b[i]);
		}
		else{
			printf("%d\n",b[i]);
		}
	}
	printf("%d",b[n-1]);
	return 0;
}