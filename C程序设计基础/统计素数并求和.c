#include<stdio.h>
#include<math.h>
int prime(int p);
int main(){
	int m,n,i,count=0,sum=0;
	scanf("%d %d",&m,&n);
	for (i=m;i<=n;i++){
		if (prime(i)==1){
			count=count+1;
			sum=sum+i;
		}
	}
	printf("%d %d",count,sum);
	return 0;
} 

int prime(int p){
	int x,y,i,sum;
	y=1;
	sum=0;
	if (p==1)
		return 0;
	else if(p<1)
		return 0;
	else{
		x=(int) sqrt(p);
		for (i=2;i<=x;i++){
			y=p%i;
			if (y==0) break;
		}
		if (y==0) return 0;
		else return 1;
	}
}