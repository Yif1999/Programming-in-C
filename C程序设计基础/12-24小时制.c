#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d:%d",&a,&b);
	if (a >= 12)
	{
		if (a >= 13)
		{
			if (a == 24)
				printf("0:%d AM\n", b);
			else
			{
				a = a - 12;
				printf("%d:%d PM\n", a, b);
			}
		}
		else
			printf("%d:%d PM\n", a, b);
	}
	else{
	
		printf("%d:%d AM\n", a, b);
	}
	return 0;
}

 
