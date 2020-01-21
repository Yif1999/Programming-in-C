#include<stdio.h>
int main(){
	char ch[81];
	int i,j,s;
	i=0;s=0;
	while ((ch[i]=getchar())!='\n'){
		if (ch[i]!='A'&&ch[i]!='E'&&ch[i]!='I'&&ch[i]!='O'&&ch[i]!='U'&&ch[i]<='Z'&&ch[i]>='A')
			s++;
		i++;
	}
	ch[i]='\0';
	printf("%d",s);
	return 0;
} 