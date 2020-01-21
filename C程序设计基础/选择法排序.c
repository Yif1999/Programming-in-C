#include<stdio.h>
int main(){
	int n,a[11],i,j,t,max,p;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for (i=1;i<=n-1;i++){
		p=i;
		for (j=i+1;j<=n;j++){
			if (a[j]>a[p]) p=j;
		}
		if (p!=i){
			t=a[p];
			a[p]=a[i];
			a[i]=t;
		}
	}
	for (i=1;i<=n-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d",a[n]);
	
	
	return 0;
}