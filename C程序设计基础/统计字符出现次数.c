#include<stdio.h>
int main(){
	char ch[81],a;
	int i,j,s;
	i=0;s=0;
	while ((ch[i]=getchar())!='\n'){
		i++;
	}
	ch[i]='\0';
	a=getchar();
	i=0;
	while (ch[i]!='\0'){
		if (ch[i]==a) s++;
		i++;
	}
	printf("%d",s);
	return 0;
} 