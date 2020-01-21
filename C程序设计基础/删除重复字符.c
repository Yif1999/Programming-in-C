#include<stdio.h>
int main(){
	int i, j, flag, len1 = 0, cnt = 0;
	char ch, temp;
	char str1[81],str2[81];
	ch = getchar();
	for (i = 0; ch != '\n'; i++)
	{
		str1[i] = ch;
		len1++;
		ch = getchar();
	}

	for (i = 0; i < len1; i++) 
	{
		flag = 0;
		for (j = 0; j < i; j++)
		{
			if (str1[i] == str1[j])
			{
				flag = 1;
			}
		}
		if (flag == 0)
		{
			str2[cnt] = str1[i];
			cnt++;
		}
	}
	for (i = 0; i < cnt - 1; i++)
	{
		for (j = 0; j < cnt - i - 1; j++)
		{
			if (str2[j] > str2[j + 1])
			{
				temp = str2[j];
				str2[j] = str2[j + 1];
				str2[j + 1] = temp;
			}
		}
	}
 
	for (i = 0; i < cnt; i++)
	{
		putchar(str2[i]);
	}

	return 0;
}
