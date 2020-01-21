#include<stdio.h>
struct stu{
	char num[20];
	char name[50];
	int score1,score2,score3;
	int sum;
};
int main(){
	int n,i;
	struct stu s[20],max;
	scanf("%d\n",&n);
	for (i=0;i<n;i++){
		scanf("%s %s %d %d %d",&s[i].num,&s[i].name,&s[i].score1,&s[i].score2,&s[i].score3);
		s[i].sum=s[i].score1+s[i].score2+s[i].score3;
		if(i==0) max=s[0];
		if (max.sum<s[i].sum){
			max=s[i];
		}
	
	}
		printf("%s %s %d",max.name,max.num,max.sum);
		return 0;
}