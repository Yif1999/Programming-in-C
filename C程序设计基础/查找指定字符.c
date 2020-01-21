#include<stdio.h>
int main(){
	char a,ch[81];
	int i=0,j,p=-1;
	scanf("%c\n",&a);
	while ((ch[i]=getchar())!='\n')
		i++;
	ch[i]='\0';
	for (j=0;j<=i;j++){
		if (ch[j]==a) p=j;
	}
	if (p==-1) printf("Not Found");
	else printf("index = %d",p);
	return 0;
}