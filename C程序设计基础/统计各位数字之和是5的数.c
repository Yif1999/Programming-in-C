int is (int number){
	int m,n=0;
	do{
		m=number%10;
		number=(number-m)/10;
		n=n+m;
	}while(number!=0);
	if (n==5) return 1;
	else return 0;
}



void count_sum(int a,int b){
	int i,s=0,sum=0;
	for (i=a; i<=b; i++){
		if (is(i)){
			s=s+1;
			sum=sum+i;
		}
	}
	printf("count = %d, sum = %d",s,sum);
} 