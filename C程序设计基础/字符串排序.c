#include<stdio.h>
#include <string.h>
int main (void)
{
	int i,j;
	char str[5][80],tmp[80]; 
	for(i=0;i<5;i++){
		scanf("%s",str[i]);
	}
	for (i=0;i<4;i++){
		for (j=0;j<4-i;j++){
			if (strcmp(str[j],str[j+1])>0){
				strcpy(tmp,str[j+1]);
				strcpy(str[j+1],str[j]);
				strcpy(str[j],tmp);
			}
		}
	}
	printf("After sorted:\n");
	for (i=0;i<5;i++){
		printf("%s\n",str[i]);
	}
	
  return 0;
}
