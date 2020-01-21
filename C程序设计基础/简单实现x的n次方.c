double mypow( double x, int n ){
	double i,s;
	s=1;
	for (i=1;i<=n;i++){
		s=s*x;
	}
	return s;
} 