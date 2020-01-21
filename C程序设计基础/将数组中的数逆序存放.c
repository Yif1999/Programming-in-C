#include<stdio.h>
int main(){
	int a[11],N,i,f=0;
	scanf("%d",&N);
	for (i=1;i<=N;i++){
		scanf("%d",&a[i]);
	}
	for (i=N;i>=2;i--){
		printf("%d ",a[i]);
	}
	printf("%d",a[1]);
	return 0;
} 