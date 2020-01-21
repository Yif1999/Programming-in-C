#include<stdio.h>
int main(){
	int a[20],N,X,i,f=0;
	scanf("%d%d",&N,&X);
	for (i=1;i<=N;i++){
		scanf("%d",&a[i]);
	}
	for (i=1;i<=N;i++){
		if (X==a[i]){
			printf("%d",i-1);
			f=1;
		}
	}
	if (f==0) printf("Not Found");
	return 0;
} 