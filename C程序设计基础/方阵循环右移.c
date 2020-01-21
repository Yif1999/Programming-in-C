#include<stdio.h>
int main(){
	int m,n,t;
	scanf("%d%d",&m,&n);
	int a[n+1][n+1],i,j;
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			t=j-m;
			while (t<1){
				t=n+t;
			}
			printf("%d ",a[i][t]);
		}
		printf("\n");
	}
} 