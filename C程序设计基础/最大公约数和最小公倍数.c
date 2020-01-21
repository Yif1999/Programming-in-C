#include<stdio.h>
#include<math.h>
int main(){
	int m,n,i,t,q;
	double x,y;
	scanf("%d %d",&m,&n);
	q=1;
	if (m>n){
		t=m;m=n;n=t;
	}
	for (i=1;i<=m;i++){
		x=m*1.0/i;
		if (x==(int)x){
			y=n*1.0/i;
			if ((y==(int)y)&&(q<i)) {
				q=i;
			}
		}
	}	
	printf("%d ",q);
	q=0;i=1;
	while(q==0){
		x=i*1.0*m;
		y=x*1.0/n;
		if (y==(int)y){
			q=x;
		}
		i=i+1;
	}
	printf("%d",q);
	return 0;
}