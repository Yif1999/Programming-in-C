#include<stdio.h>

int main(){
    struct num{
        int a;
        int b;
        double value;
    }x1,x2;
    scanf("%d/%d %d/%d",&x1.a,&x1.b,&x2.a,&x2.b);
    x1.value=x1.a*1.0/x1.b;
    x2.value=x2.a*1.0/x2.b;
    if(x1.value<x2.value)
        printf("%d/%d < %d/%d",x1.a,x1.b,x2.a,x2.b);
    if(x1.value>x2.value)
        printf("%d/%d > %d/%d",x1.a,x1.b,x2.a,x2.b);
    else if(x1.value==x2.value)
        printf("%d/%d = %d/%d",x1.a,x1.b,x2.a,x2.b);
    return 0;
}