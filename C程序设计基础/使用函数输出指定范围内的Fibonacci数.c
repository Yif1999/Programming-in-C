int fib(int n){
	if (n==1 ||n==2){
		return 1;
	}
	else{
		int sum;
		sum=fib(n-1)+fib(n-2);
		return sum;
	}
	
} 

void PrintFN(int m, int n){
	int i=1,f=0;
	while(fib(i+1)<=n){
		if ((fib(i)>=m)&&(fib(i)<=n)){
			printf("%d ",fib(i));f++;
		}
		i++;
		
	}
	if ((fib(i)>=m)&&(fib(i)<=n)) {
	printf	("%d",fib(i));
	f++;
	}
	if (f==0) printf("No Fibonacci number");
}