#include<stdio.h>
int main(){
	int n,s=0;
	scanf("%d",&n);
	int a[n+1],i,j;
	for (i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			if (i!=j){
				s=s+10*a[i]+a[j];
			}
		}
	}
	printf("%d",s);
}