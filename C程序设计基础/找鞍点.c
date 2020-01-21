#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int a[t+1][t+1],i,j;
	for (i=1;i<=t;i++){
		for (j=1;j<=t;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int p=0;
	for (i=1;i<=t;i++){
		for (j=1;j<=t;j++){
			int f=0;
			int m,n;
			for (m=1;m<=t;m++){
				if (a[m][j]<a[i][j]) f++;
			}
			for (n=1;n<=t;n++){
				if (a[i][n]>a[i][j]) f++;
			}
			if (f==0) {
				printf("%d %d",i-1,j-1);
				p++;
			}
			
		}
	}
	if (p==0) printf("NONE");
	return 0;
}