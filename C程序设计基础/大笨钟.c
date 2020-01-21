#include<stdio.h>
int main(){
	int hour,minute,minutes,DangCount,i;
	scanf("%d:%d",&hour,&minute);
	minutes=60*hour+minute;
	if (minutes <= 720){
		printf("Only %02d:%02d.  Too early to Dang.",hour,minute);
		
	}
	else if(minutes<1440 && minutes>720){
		DangCount=(int)((minutes-720)/60);
		if ((minutes-720)%60==0){
		
		for (i=1;i<=DangCount;i++){
			printf("Dang");
		}
		}
		else{
			for (i=0;i<=DangCount;i++){
			printf("Dang");
		}
	}
	}
return 0;
}