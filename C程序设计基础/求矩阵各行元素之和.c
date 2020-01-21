#include<stdio.h>
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int a[100][100],i,j;
	for (i=1;i<=m;i++){
		for (j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int s[i];
	for (i=1;i<=m;i++){
		s[i]=0;
		for (j=1;j<=n;j++){
			s[i]+=a[i][j];
		}
		printf("%d\n",s[i]);
	}
	return 0;
} 