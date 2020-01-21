#include <stdio.h>
int main(){
    int a,b;
    char c;
    double pay;
    scanf("%d%d %c",&a,&b,&c);
    if(90==b) pay=a*6.95;
    else if(93==b) pay=a*7.44;
    else pay=a*7.93;
    if('m'==c) pay*=0.95;
    else pay*=0.97;
    printf("%.2lf\n",pay);
    return 0;

}
