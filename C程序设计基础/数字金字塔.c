void pyramid(int n)
{
	int i,j;
	for(i=1; i<=n; i++)
    {
        for(j=n-i; j>0; j--)
            printf(" ");
        for(j=i; j>0; j--)
            printf("%d ", i);
        printf("\n");
    }
    return ;
}