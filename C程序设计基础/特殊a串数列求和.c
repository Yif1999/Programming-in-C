#include<stdio.h>
#include<math.h>
int main ()
{
	int i, a, n, s1=0, s=0;
	scanf("%d%d", &a, &n);
	for(i=1; i<=n; i++){
		s1+=pow(10,i-1)*a;
		s+=s1;
	}
	printf("s = %d", s);
	
	return 0;
}
