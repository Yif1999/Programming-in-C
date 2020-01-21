#include<stdio.h>
#include <string.h>
int main (void)
{
	int n,i;
	char str[100]; 
	char Min[100];
	scanf ("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%s", &str);
		if (i==0) strcpy(Min,str);
		if (strcmp(Min, str) > 0){
			strcpy(Min, str);
		}
	}
	
	printf ("Min is: %s", Min);
	
  return 0;
}
