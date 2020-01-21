bool palindrome( char *s ){

	char* p;
	char* q;
	p=s;
	q=s+strlen(s)-1;
	while(p<q){
		if(*p!=*q){
			return false;
		}
		p++;
		q--;
	}	
	return true; 
}
