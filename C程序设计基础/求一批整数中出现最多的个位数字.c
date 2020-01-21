#include<stdio.h>
int main(){
	int number[1002],count[10]={0},n,a,max,i,j;
	scanf("%d",&n);
	
	for (i=1;i<=n;i++){
		scanf("%d",&number[i]);
	}
	for (i=1;i<=n;i++){
		if (number[i]==0) count[0]++;
		while(number[i]!=0){
			a=number[i]%10;
			number[i]=number[i]/10;
			count[a]++;
		}
	
	}
	max=0;
	for (j=0;j<=9;j++){
		if (count[j]>max) max=count[j];
	}
	printf("%d:",max);
	for (j=0;j<=9;j++){
		if (count[j]==max) printf(" %d",j);
	}
	return 0;
}