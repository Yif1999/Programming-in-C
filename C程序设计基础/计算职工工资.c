#include<stdio.h>
#include<string.h>
#include<math.h>
struct salary {
	char name[10];
	float basis;
	float change;
	float expenses;
}staff[1000]; 

int main(){
	int N,i,j,s;
	scanf("%d",&N);
	struct salary staff[1000]={'\0'};
	for (i=0;i<N;i++){
		scanf("%s%f%f%f",&staff[i].name,&staff[i].basis,&staff[i].change,&staff[i].expenses);
	}
	for (i=0;i<N;i++){
		printf("%s %.2f\n",staff[i].name,staff[i].basis+staff[i].change-staff[i].expenses);
	}
	return 0;
}