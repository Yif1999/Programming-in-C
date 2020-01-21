#include<stdio.h>
struct stu{
	char num[10];
	char name[10];
	int score;
};
int main(){
	int n,i,sum=0;
	double avr;
	scanf("%d",&n);
	struct stu student[n];
	for (i=0;i<n;i++){
		scanf("%s %s %d",&student[i].num,&student[i].name,&student[i].score);
	}
	for (i=0;i<n;i++){
		sum+=student[i].score;
	}
	avr=sum*1.0/n;
	printf("%.2lf\n",avr);
	for (i=0;i<n;i++){
		if (student[i].score<avr){
			printf("%s %s\n",student[i].name,student[i].num);
		}
	}
	return 0;
}