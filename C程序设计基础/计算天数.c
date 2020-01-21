#include<stdio.h>
#include<math.h>
int main(){
	int year,month,days;
	scanf("%d/%d/%d",&year,&month,&days);
	switch(month-1){
		case 11:
			days=days+30;
		case 10:
			days=days+31;
		case 9:
			days=days+30;
		case 8:
			days=days+31;
		case 7:
			days=days+31;
		case 6:
			days=days+30;
		case 5:
			days=days+31;
		case 4:
			days=days+30;
		case 3:
			days=days+31;
		case 2:
			if ((year%4==0&&year%100!=0)||year%400==0){
				days=days+29;
			}
			else{
				days=days+28;
			}
		case 1:
			days=days+31;
	}
	printf("%d",days);
	return 0;

}