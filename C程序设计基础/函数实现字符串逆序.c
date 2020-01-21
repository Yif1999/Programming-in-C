void f( char *p )
{
    int i=0,q=0,h,tmp;
    while(p[i]!='\0')
        i++;
        h=i-1;
    while(q<=h)
    {
        tmp=p[q];
        p[q]=p[h];
        p[h]=tmp;
        q++;
        h--;
    }
    return ;
}