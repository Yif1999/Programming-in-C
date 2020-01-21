#include<stdio.h>
#include<math.h>
int main(){
	int num,n,i,j,f=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		num=pow(2,i)-1;
		for(j=2;j<=sqrt(num);j++)
			if(num%j==0) break;
		if(j>sqrt(num)){
			printf("%d\n",num);
			f++;
		}	
	}
	if(f==0) printf("None");
	return 0;
} 
