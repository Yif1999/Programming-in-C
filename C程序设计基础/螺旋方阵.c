#include <stdio.h>
main()
{
	int c=1,x=0, y=0,n, a[10][10]={0};
	scanf("%d", &n);
	a[x][y] = 1;
	while(n*n!=c)
	{
	    while(y+1<n && !a[x][y+1] )
		     a[x][++y] = ++c;
		while(x+1<n  && !a[x+1][y])
		     a[++x][y] = ++c;
		while(y-1>=0  && !a[x][y-1])
		     a[x][--y] = ++c;
		while(x-1>=0 && !a[x-1][y])
		     a[--x][y] = ++c;
    }
	for(x=0;x<n;x++)
	{ 
	   for(y=0;y<n;y++)
	   	{
	   		printf("%3d", a[x][y]);
		}
	   	printf("\n");
    }
 } 
