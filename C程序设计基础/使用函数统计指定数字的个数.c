int CountDigit( int number, int digit )
{
	int count=0,remainder;
	
	if(number<0){
		number*=-1;
	} 
	while(number>10){
		remainder=number%10;
		number=number/10;
			if(remainder==digit){
				count=count+1;
		}
	}
	if(number==digit){
		count=count+1;
	}	
	
	return count;
}