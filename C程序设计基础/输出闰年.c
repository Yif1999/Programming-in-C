#include<stdio.h>
int main(){
	int i,n,s;
	s=0;
	scanf("%d",&n);
	if(n<2001||n>2100){
		printf("Invalid year!");
	}
	else{


		for (i=2001;i<=n;i++){
			if ((i%4==0 && i%100!=0) ||i%400==0){
				printf("%d\n",i);
				s=s+1;
			}
		}
		if (s==0) {
		printf("None");
		}
}
	return 0;
}