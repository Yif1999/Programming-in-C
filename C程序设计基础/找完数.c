#include<stdio.h>
#include<math.h>
int f(int n);
int main(){
	int x,y,j,i,h=0;
	double g;
	scanf("%d %d",&x,&y);
	for (j=x;j<=y;j++){
		if (f(j)==1){
			h++;
			printf("%d = 1",j);
			for (i=2;i<j;i++){
				g=j*1.0/i;
				if (g==(int)g){
					printf(" + %d",i);
				}
			}
			printf("\n");
		}
	}
	if (h==0){
		printf("None");
	}
	return 0;
} 

int f(int n){
	int i,sum;
	double x;
	sum=0;
	for (i=1;i<n;i++){
		x=n*1.0/i;
		if (x==(int)x){
			sum=sum+i;
		}
	}
	if (sum==n){
		return 1;
	}
	else{
		return 0;
	}
}