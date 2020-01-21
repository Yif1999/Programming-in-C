int set_grade( struct student *p, int n ){
	int failure=0,i;
	for (i=1;i<=n;i++){
		if(p->score<60){
			p->grade='D';
			failure++;
		}
		else if(p->score>=60&&p->score<70)
			p->grade='C';
		else if(p->score>=70&&p->score<85)
			p->grade='B';
		else 
			p->grade='A';
		p++;
	}
	return failure;
}