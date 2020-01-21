char *match( char *s, char ch1, char ch2 ){
    char str[MAXS]; 
    char *p,*q, *t;
    int i;
    p = s;
    while(*p!=ch1&&*p!='\0'){
        p++;
    }
    q = p;
    for(i=0;i<MAXS && *p !='\0' && *p != ch2;i++,p++){
        str[i] = *p;    
    }
    if(*p != '\0'){
        str[i] = ch2;
        str[++i] = '\0';
    }
    str[i] = '\0';  
    printf("%s\n",str);
    
    return q;
}