void delchar( char *str, char c )
{
    char *p=str;
    while(*str)
    {
        if(*str!=c)
            *p++=*str;
        str++;
    }
    strcpy(p,str);
}