#include<stdio.h>
int main(){
	int m,n,f=0;
	scanf("%d%d",&m,&n);
	int a[m+1][n+1],i,j;
	for (i=1;i<=m;i++){
		for (j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (i=2;i<m;i++){
		for (j=2;j<n;j++){
			if (a[i][j]>a[i-1][j]&&
				a[i][j]>a[i+1][j]&&
				a[i][j]>a[i][j-1]&&
				a[i][j]>a[i][j+1]){
					printf("%d %d %d\n",a[i][j],i,j);
					f++;
				}
		}
	}
	if (f==0){
		printf("None %d %d",m,n); 
	}
	return 0;
} 