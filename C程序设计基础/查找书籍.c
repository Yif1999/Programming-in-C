#include<stdio.h>
struct finder{
	char title[100];
	double price;
};
int main(){
	int n,i,M,m;
	scanf("%d",&n);
	struct finder book[n];
	for (i=0;i<n;i++){
		scanf("\n");
		gets(book[i].title);
		scanf("%lf",&book[i].price);
	}
	M=0;m=0;
	for (i=0;i<n;i++){
		if (book[M].price<book[i].price) M=i;
		if (book[m].price>book[i].price) m=i;
	}
	printf("%.2lf, %s\n",book[M].price,book[M].title);
	printf("%.2lf, %s",book[m].price,book[m].title);
	return 0;
}