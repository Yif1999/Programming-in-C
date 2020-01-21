void sort( int a[], int n )
{
	int temp,k,min,i;
	for(k=0;k<n-1;k++){
		min=k;
		for(i=k+1;i<n;i++)
		if(a[i]<a[min])
		min=i;
		temp=a[min];
		a[min]=a[k];
		a[k]=temp;
		
	}
}