void StringCount( char *s )
{
    int cap=0,low=0,bla=0,num=0,els=0,i=0;
    while(s[i]!='\0')
    {
      if(s[i]>='A'&&s[i]<='Z')
         cap++;
      else if(s[i]>='a'&&s[i]<='z')
         low++;
      else if(s[i]==' ')
         bla++;
      else if(s[i]>='0'&&s[i]<='9')
         num++;
      else
        els++;
      i++;
    }
    printf("%d %d %d %d %d",cap,low,bla,num,els);
}