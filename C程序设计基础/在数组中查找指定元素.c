int search(int list[], int n, int x){
	int i;
 	for (i = 0; i < n; i++){
		if (list[i] == x)
		{
			return i ;
			break;
		}
	}
	return -1;
}
