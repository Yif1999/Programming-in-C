#include<stdio.h>
int main(){
	int n,a[11],i,j,t,max,p;
	scanf("%d",&n);
	
	for (i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}

	p=1;
	for (i=1;i<=n;i++){
		if (a[i]<a[p]){
			p=i;
		}
	} 
	t=a[1];a[1]=a[p];a[p]=t;
	
	p=n;
	for (i=n;i>=1;i--){
		if (a[i]>a[p]){
			p=i;
		}
	}
	t=a[n];a[n]=a[p];a[p]=t;
	
	for (i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}