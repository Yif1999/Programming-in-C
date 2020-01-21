int IsSquare(int n){
	double x,y;

	y=1.0*sqrt(n);
	x=(int)y;
	if(y==x){
		return 1;
	}
	else{
		return 0;
	}
}