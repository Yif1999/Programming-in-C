#include<stdio.h>
int main(){
	struct giao{
		double x,y;
	}hia,hiahia,hiahiahia;
	scanf("%lf %lf %lf %lf",&hia.x,&hia.y,&hiahia.x,&hiahia.y);
	hiahiahia.x=hia.x+hiahia.x;
	hiahiahia.y=hia.y+hiahia.y;
	if(fabs(hiahiahia.x)<0.05)
	{
		hiahiahia.x=0.0;
	}
	if(fabs(hiahiahia.y)<0.05)
	{
		hiahiahia.y=0.0;
	}
	printf("(%.1lf, %.1lf)",hiahiahia.x,hiahiahia.y);
	return 0;
}