#include<stdio.h>
int main(){
	char ch[111];
	int num[111],i,j,p,s;
	i=0;p=-1;
	while ((ch[i]=getchar())!='\n'){
		i++;
	}
	ch[i]='\0';
	scanf("%d",&s);
	for (j=0;j<=i-1;j++){
		p=(j+i+s)%i;
		putchar(ch[p]);
	}
	return 0;
} 