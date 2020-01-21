#include<stdio.h>
int main(){
	char a[81],s[]="ZYXWVUTSRQPONMLKJIHGFEDCBA";
	int i,j,p;
	i=0;
	while ((a[i]=getchar())!='\n')
		i++;
	a[i]=0;
	for (j=0;j<=i;j++){
		if (a[j]>='A'&&a[j]<='Z')
			a[j]=s[a[j]-'A'];
		putchar(a[j]);
		
	}
	return 0;
	
}
