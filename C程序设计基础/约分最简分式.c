#include<stdio.h>
#include<math.h>
int main(){
	int m,n,i,t,f=0,q;
	double x,y;
	scanf("%d/%d",&m,&n);
	q=1;
	if (m>n){
		t=m;m=n;n=t;
		f++;
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
	m=m/q;n=n/q;
	if (f==0)
	printf("%d/%d",m,n);
	else
		printf("%d/%d",n,m);
	return 0;
	
}