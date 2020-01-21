#include<stdio.h>
#include<math.h>

int prime(int p);

int main(){
	double n,i,f;
	scanf("%lf",&n);
	for (i=2;i<=n/2;i++){
		if (prime(i)==1){
			f=n-i;
			if (prime(f)==1){
				printf("%.0lf = %.0lf + %.0lf",n,i,f);
				break;
			}
		}
	}
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