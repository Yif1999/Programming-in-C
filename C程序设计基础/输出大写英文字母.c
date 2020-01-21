#include<stdio.h>
int main(){
	char a[81];
	int b[26]={0},c[81]={-1},i,j,s,p;
	i=0;p=-1;
	while ((a[i]=getchar())!='\n'){
		i++;
	}
	a[i]='\0';
	for (j=0;j<=i;j++){
		if (a[j]>='A'&&a[j]<='Z'){
			p++;
			c[p]=j;
		}
	}
	if (p<0) {
		printf("Not Found");
		return 0;
	}
	for (s=0;s<=p;s++){
		if (b[a[c[s]]-'A']==0){
			putchar(a[c[s]]);
			b[a[c[s]]-'A']=1;
		}
	}
	return 0;
}