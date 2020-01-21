void strmcpy(char*t, int m,char *s){
  int n=0;
	while(n++<m-1) t++;
	while(*t!='\0'){
		*s=*t;
		t++;
		s++;
	}
	*s='\0';
} 