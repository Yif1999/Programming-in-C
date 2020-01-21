#include<stdio.h>
int main(){
	int m;
	scanf("%d",&m);
	int a[m+1][m+1],i,j,sum=0;
	for (i=1;i<=m;i++){
		for (j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (i=1;i<m;i++){
		for (j=1;j<m;j++){
			if (j!=(m+1-i)){
				sum+=a[i][j];
			} 
		}
	}
	printf("%d",sum);
	return 0;
} 