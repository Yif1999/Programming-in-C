#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,n,m,s,i,t;
	scanf("%d",&n);
	s=1;
	if(n==495){
		printf("1: 954 - 459 = 495");
	}
	
	while(n!=495){
			printf("%d: ",s);
	c=n%10;b=n/10%10;a=n/10/10%10;
	//max
	if (c>b){
		t=b;b=c;c=t;
	}
	if (b>a){
		t=a;a=b;b=t;
	}
	if (c>b){
		t=b;b=c;c=t;
	}
	m=100*a+10*b+c;
	printf("%d - ",m);
	//min
	if (c<b){
		t=b;b=c;c=t;
	}
	if (b<a){
		t=a;a=b;b=t;	
	}
	if (c<b){
		t=b;b=c;c=t;
	}
	n=100*a+10*b+c;
	printf("%d = ",n);
	n=m-n;
	printf("%d\n",n);
	s++;
	}
	

	
}