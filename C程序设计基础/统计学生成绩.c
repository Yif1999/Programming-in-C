#include<stdio.h>
int main(){
	int n,score,i;
	int a,b,c,d,e;
	a=0;b=0;c=0;d=0;e=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		scanf("%d",&score);
		if (score>=90){
			a=a+1; 
		}
		else if (score>=80){
			b=b+1;
		}
		else if (score>=70){
			c=c+1;
		}
		else if (score>=60){
			d=d+1;
		}
		else{
			e=e+1;
		}
	}
	printf("%d %d %d %d %d",a,b,c,d,e);
	return 0;
} 