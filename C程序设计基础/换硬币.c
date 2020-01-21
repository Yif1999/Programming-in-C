#include<stdio.h>
#include<math.h>
int main(){
	int c5=0,c2=0,c1=0,cnt=0;
	int x=13; 
	scanf("%d",&x);
	for(c5=x/5;c5>0;c5--)
		for(c2=x/2;c2>0;c2--)
			for(c1=x;c1>0;c1--)
				if(c5*5+c2*2+c1==x){ 
					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",c5,c2,c1,c5+c2+c1);
					cnt++;
				}
	printf("count = %d",cnt);	
	return 0;	
}

	

	

 
