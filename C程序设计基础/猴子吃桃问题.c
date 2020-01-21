#include<stdio.h>
#include<math.h>
int main(){
	int N,peach=0,rest=1,day;
	scanf("%d",&N);
	for (day=N;day>1;day--){
		peach=(rest+1)*2;
		rest=peach;
	}
	printf("%d",peach);
	return 0;
}