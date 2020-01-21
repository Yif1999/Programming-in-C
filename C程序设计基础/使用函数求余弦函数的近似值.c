double funcos( double e, double x ){
	double tmp1=1,tmp2=1,tmp3=1,sum=1;

	int i,k;

 	k=-1;

 	for(i=2;tmp1>e;i+=2){
		tmp2 = tmp2*x*x;
		tmp3 = tmp3*i*(i-1);
		sum = sum + k*tmp2/tmp3;
		tmp1=tmp2/tmp3;
		k=-k;
	}

	return sum;

}