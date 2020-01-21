#include<stdio.h>
int main(){
int n=0,k=0;
scanf("%d %d",&n,&k);
int a[100];
for(int i=99;i>=0;i--){
a[i]=0;
}
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(int i=1;i<=k;i++){
for(int j=0;j<n-1;j++){
if(a[j]>a[j+1]){
int temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
for(int i=0;i<n-1;i++){
printf("%d ",a[i]);
}
printf("%d",a[n-1]);
return 0;
}