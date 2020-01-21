#include<stdio.h>
int main()
{
	int start,stop,dh,dm,sum,h,m;
	scanf("%d %d",&start,&stop);
	dh=stop/100-start/100;
	dm=stop%100-start%100;
	sum=dh*60+dm;
	h=sum/60;
	m=sum%60;
	printf("%02d:%02d",h,m);
	return 0;
} 