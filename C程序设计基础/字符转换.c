#include<stdio.h>
int main(){
	char ch[81];
	int num[81],i,j,p,s=0;
	i=0;p=-1;
	while ((ch[i]=getchar())!='\n'){
		i++;
	}
	ch[i]='\0';
	for (j=0;j<=i;j++){
		if (ch[j]>='0'&&ch[j]<='9'){
			p++;
			num[p]=ch[j]-'0';
		}
	}
	num[p+1]='\0';
	for (i=0;i<=p;i++){
		s=10*s+num[i];
	}
	printf("%d",s);
	return 0;
} 