#include<stdio.h>
struct time{
	int h;
	int m;
	int s;
}; 
int main(){

	struct time t1;
	t1.h=0;t1.m=0;t1.s=0;
	int derta;
	scanf("%d:%d:%d %d",&t1.h,&t1.m,&t1.s,&derta);

	if (t1.s+derta<60){
		t1.s=t1.s+derta;
	}
	else{
		while(t1.s+derta>=60){
			derta-=60;
			t1.m++;
		}
		t1.s=t1.s+derta;
		if (t1.m>=60){
			while(t1.m>=60){
				t1.m-=60;
				t1.h++;
			}
		}
		if (t1.h>=24){
			while(t1.h>=24){
				t1.h-=24;
			}
		}
	}
	printf("%02d:%02d:%02d",t1.h,t1.m,t1.s);
	return 0;
}