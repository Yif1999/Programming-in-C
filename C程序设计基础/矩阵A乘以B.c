#include<stdio.h>
int main(){
	int i,j;
	int ra,ca;
	scanf("%d%d",&ra,&ca);
	int a[ra+1][ca+1];
	for (i=1;i<=ra;i++){
		for (j=1;j<=ca;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int rb,cb;
	scanf("%d%d",&rb,&cb);

	int b[rb+1][cb+1];
	for (i=1;i<=rb;i++){
		for (j=1;j<=cb;j++){
			scanf("%d",&b[i][j]);
		}
	}
	if (ca!=rb){
		printf("Error: %d != %d",ca,rb);
		return 0;
	}


	int c[ra+1][cb+1],p;
	for (i=1;i<=ra;i++){
		for (j=1;j<=cb;j++){
			c[i][j]=0;
			for (p=1;p<=ca;p++){
				c[i][j]=c[i][j]+a[i][p]*b[p][j];
			}
		}
	}
	
	printf("%d %d\n",ra,cb);
	
	for (i=1;i<=ra;i++){
		for (j=1;j<cb;j++){
			printf("%d ",c[i][j]);
		}
		printf("%d\n",c[i][cb]);
	}
	return 0;
}