#include<stdio.h>
int main(){
	char ch[81],a;
	int i,j,s;
	i=0;s=0;
	while ((ch[i]=getchar())!='\n'){
		i++;
	}
	ch[i]='\0';
	for (i=i-1;i>=0;i--){
		putchar(ch[i]);
	}

	return 0;
} 