int Factorial( const int N )
{
	int i,n,s;
	n=N;
	if (n>0){
		s=1;
		for (i=1;i<=N;i++){
			s=s*i; 
		}
		return s;
	}
	else if (n==0){
		return 1;
	}
	else{
	  return 0;
	}
}
