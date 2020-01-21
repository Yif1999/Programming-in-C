
#include <stdio.h>

int p(int a,int b);

int main(void)

{

  int n,t=0;

  scanf("%d",&n);

  int m=p(10,n-1);

  int v=p(10,n);

  for(int i=m;i<v;i++){

    int k=i;

    int sum=0;

    while(k>0){

    t=k%10;

    k=k/10;

    sum+=p(t,n);

    }

  if(sum==i)

  printf("%d\n",i);

  }

  

return 0;

}

int p(int a,int b)

{

 int t=a;

 for(int i=1;i<b;i++)

  a=a*t;

  

 return a;

}
