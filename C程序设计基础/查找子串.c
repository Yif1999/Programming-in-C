#include <string.h>
char *search(char *s, char *t){
	char *p=NULL;
	int i,j,k=0,lens,lent;
	
	lens = strlen(s);
	lent = strlen(t);
 
	for(i=0;i<lens;i++){
		j=i;
		while(s[j]==t[k]){
			k++;
			j++;
		}
		if(k>=lent){
			p=&s[i];
			return p;
		}
		k=0;
	}
 
	return p;
}
