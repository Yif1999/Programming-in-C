#include<stdio.h>
#include <string.h>
int main (void)
{
	int n,i,k=0,j;
	scanf("%d",&n);
	char str[n][80],tmp[80]; 
	for(i=0;i<n;i++){
		scanf("%s",str[i]);
	}
	for (i=0;i<n;i++){
		if (strlen(str[i])>k) {
			k=strlen(str[i]);
			j=i;
		}
	}
	printf("The longest is: %s\n",str[j]);

	
  return 0;
}
