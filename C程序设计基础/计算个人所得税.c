#include<stdio.h>
int main(){
  float a;
  scanf("%f",&a);
  if(a>=0){
    if(a<1600){printf("0.00");}
    else if(a>1600&&a<=2500){a=(a-1600)*0.05;printf("%.2f",a);}
    else if(a>2500&&a<=3500){a=(a-1600)*0.10;printf("%.2f",a);}
    else if(a>3500&&a<=4500){a=(a-1600)*0.15;printf("%.2f",a);}
    else if(a>4500){a=(a-1600)*0.20;printf("%.2f",a);}
  }
  return 0;
}
