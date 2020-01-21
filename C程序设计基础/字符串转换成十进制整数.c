#include<stdio.h>
int main(void)
{
	int i, len=0, index1=-1, index2=-1, cnt = 0, temp=1, sum=0;
	char str1[1000];
	char str2[1000];
	int  str3[1000];
	char ch;
 
	ch = getchar();
	for (i = 0; ch != '#'; i++)
	{
		str1[i] = ch;
		len++;
		ch = getchar();
	}
 
	for (i = 0; i < len; i++)
	{
		if (str1[i] == '-')
		{
			index1 = i;
			break;
		}
	}
 
	for (i = 0; i < len; i++)
	{
		if ((str1[i] >= 'A' && str1[i] <= 'F') || (str1[i] >= 'a' && str1[i] <= 'f') || (str1[i] >= '0' && str1[i] <= '9'))
		{
			index2 = i;
			break;
		}
	}
 
	for (i = 0; i < len; i++)
	{
		if ((str1[i] >= 'A' && str1[i] <= 'F') || (str1[i] >= 'a' && str1[i] <= 'f') || (str1[i] >= '0' && str1[i] <= '9'))
		{
			str2[cnt] = str1[i];
			cnt++;
		}
	}
 
	for (i = 0; i < cnt; i++)
	{
		if ((str2[i] >= 'A' && str2[i] <= 'F'))
		{
			str3[i] = str2[i] - 'A' + 10;
		}
		if ((str2[i] >= 'a' && str2[i] <= 'f'))
		{
			str3[i] = str2[i] - 'a' + 10;
		}
		if ((str2[i] >= '0' && str2[i] <= '9'))
		{
			str3[i] = str2[i] - '0';
		}
	}
 
	for (i = cnt-1; i >= 0; i--)
	{
		sum += str3[i] * temp;
		temp *= 16;
	}
 
	if (index1>-1)
	{
		if (index1 > index2)
		{
			printf("%d\n", sum);
		}
		else if (index1 < index2)
		{
			printf("-%d\n", sum);
		}
	}
	else
	{
		printf("%d\n", sum);
	}
	return 0;
}
