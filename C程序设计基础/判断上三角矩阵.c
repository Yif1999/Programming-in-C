#include<stdio.h>
int main(){
	int t,q;
	int b[100]={0};
	scanf("%d",&t);
	for (q=1;q<=t;q++){
		int n;
		scanf("%d",&n);
		int a[n+1][n+1],i,j;
		for (i=1;i<=n;i++){
			for (j=1;j<=n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		int f=0;
		for (i=2;i<=n;i++){
			for (j=1;j<i;j++){
				if (a[i][j]!=0) b[q]++;
			}
		}
		
	}
	for (q=1;q<=t;q++){
		if (b[q]==0) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}