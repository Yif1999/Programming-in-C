#include<stdio.h>
#include <string.h>
int main(){
	int i=0;
	char a[10001],b[10001],res[10001],ch;
	while((a[i]=getchar())!='\n')
		++i;
	a[i]='\0';
	i=0;
	while((b[i]=getchar())!='\n')
		++i;
	b[i]='\0';
	int cur=0;
	for(i=0;a[i]!='\0';i++){
		int isfound=0;
		for (int j=0;b[j]!='\0';j++)
			if(a[i]==b[j]){
				isfound=1;
				break;
			}
		if(isfound==0){
			res[cur++]=a[i];
		}
	}
	res[cur]='\0';
	printf("%s\n",res);
	return 0;
}