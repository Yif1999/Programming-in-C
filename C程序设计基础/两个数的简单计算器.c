#include <stdio.h>
 
int main(void)
{
	int a, b,d;
	char c;
	scanf("%d %c %d", &a, &c, &b);
	switch (c)
	{
	case '+':
	{
		d = a + b;
		printf("%d", d);
		break;
	}
	case '-':
	{
		d = a - b;
		printf("%d", d);
		break;
	}
	case'*':
	{
		d = a*b;
		printf("%d", d);
		break;
	}
	case'/':
	{
		d = a / b;
		printf("%d", d);
		break;
	}
	case'%':
	{
		d = a%b;
		printf("%d", d);
		break;
	}
	default: printf("ERROR\n");
		break;
	}
	return 0;
}
