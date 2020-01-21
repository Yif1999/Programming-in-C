#include<stdio.h>
int main(){
	char ch[81],a;
	int i,j,s;
	i=0;s=0;
	while ((ch[i]=getchar())!='#'){
		i++;
	}
	ch[i]='\0';
	for (j=0;j<=i;j++){
		if (ch[j]>='A'&&ch[j]<='Z') ch[j]+=32;
		else if (ch[j]>='a'&&ch[j]<='z') ch[j]-=32;
	}
	for (j=0;j<=i;j++) putchar(ch[j]);
	return 0;
} 