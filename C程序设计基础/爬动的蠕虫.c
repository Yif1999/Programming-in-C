#include<stdio.h>

int main()
{
    int  n, u, d;
    scanf("%d%d%d", &n, &u, &d);
    int t = 0, l = 0, i = 0;
    while(l < n)
    {
        if(i % 2 == 0)
            l += u;
        else
            l -= d;
        i++;
        t++;
    }
    printf("%d\n", t);
    return 0;
}