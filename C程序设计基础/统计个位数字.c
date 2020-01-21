int Count_Digit (int n, int d ){
	int i,j,s=0;
	if (n==0) {
		if(d==0) return 1;
	}
	else{

	while(n!=0){
		j=abs(n%10);
		if (j==d){
			s++;	
		}
		n=n/10;
	}
	return s;	}
}