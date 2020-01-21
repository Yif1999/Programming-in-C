#include<stdio.h>
#include<math.h>
int main(){
	int x,y,n,a,b,i,f=0;
	scanf("%d",&n);
	for (x=1;x<100;x++){
		for(y=x;y<100;y++){
			i=x*x+y*y;
			if (i==n){
				printf("%d %d\n",x,y);
				f++;
				break;
			}
		}
	}
	if (f==0){
		printf("No Solution");
	}
	return 0;
} 