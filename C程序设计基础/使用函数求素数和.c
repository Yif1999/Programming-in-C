int prime(int p){
	int x,y,i,sum;
	y=1;
	sum=0;
	if (p==1)
		return 0;
	else if(p<1)
		return 0;
	else{
		x=(int) sqrt(p);
		for (i=2;i<=x;i++){
			y=p%i;
			if (y==0) break;
		}
		if (y==0) return 0;
		else return 1;
	}
}


int PrimeSum( int m, int n ){
	int i,sum=0;
	for (i=m;i<=n;i++){
		if(prime(i)==1){
			sum=sum+i;
		}
	}
	return sum;
} 