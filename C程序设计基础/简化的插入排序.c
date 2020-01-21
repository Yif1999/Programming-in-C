#include<stdio.h>
int main(){
	int n,a[12],i,j,t,max,p;
	scanf("%d",&n);
	for (i=1;i<=n+1;i++){
		scanf("%d",&a[i]);
	}

	for (i=1;i<=n;i++){
		p=i;
		for (j=i+1;j<=n+1;j++){
			if (a[j]<a[p]) p=j;
		}
		if (p!=i){
			t=a[p];
			a[p]=a[i];
			a[i]=t;
		}
	}
	for (i=1;i<=n+1;i++){
		printf("%d ",a[i]);
	}

	
	
	return 0;
}