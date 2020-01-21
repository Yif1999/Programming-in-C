#include <stdio.h>
int main()
{    int n,count,count1=1,NUM,NUM1;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    NUM1=num[0];
    for(int i=0;i<n;i++){
        NUM=num[i]; count=0;
        for(int j=0;j<n;j++){
            if(NUM==num[j]){
                count++;
            }
        }
        if(count>count1){
            count1=count;
            NUM1=NUM;
        }
    }
    printf("%d %d",NUM1,count1);
    return 0;
}