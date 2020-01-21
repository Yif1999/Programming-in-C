#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,x1,x2,delta;
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a==0&&b==0&&c==0){
		printf("Zero Equation");
	}
	else if (a==0&&b==0&&c!=0){
		printf("Not An Equation");
	}
	else if (a==0&&b!=0&&c!=0){
		x1=(-1)*c/b;
		printf("%.2lf",x1);
	}
	else{
	
		delta=pow(b,2)-4*a*c;
	
		if (delta==0){
			x1=(-1)*b/(2*a);
			printf("%.2lf",x1);
		}
		else if(delta>0){
			x1=((-1)*b+pow(delta,0.5))/(2*a);
			x2=((-1)*b-pow(delta,0.5))/(2*a);
			printf("%.2lf\n",x1);
			printf("%.2lf",x2);
		}
		else{
			delta=pow((-1)*delta,0.5)/(2*a);
			x1=(-1)*b/(2*a);
			x1=(int)(x1*100)/100;
			printf("%.2lf+%.2lfi\n",x1,delta); 
			printf("%.2lf-%.2lfi",x1,delta); 
		}
	}
	return 0;
}