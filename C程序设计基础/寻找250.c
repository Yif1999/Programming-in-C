#include<stdio.h>
#include<math.h>
int main(){
	int x,i,f;
	i=1;f=1;
	do {
	 scanf("%d",&x); 
	 if ((x==250)&&f) {
			printf("%d",i);
			f=0;
	 }
	 	i=i+1;
	} while (getchar() !='\n');
	return 0;
}