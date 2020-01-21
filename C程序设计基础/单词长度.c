#include<stdio.h>
int main(){
	char c;
	int cnt=0,first=1;
	while(scanf("%c",&c)){
	  if(c=='.'){
	    if (cnt!=0&&first==1) printf("%d\n",cnt);
	    else if (cnt!=0&&first==0) printf(" %d\n",cnt);
	    return 0;
	  }
	 if (c==' '){
	   if (cnt!=0){
	     if(first==1){
	       printf("%d",cnt);
	       first=0;
	     }
	     else{
	       printf(" %d",cnt);
	       
	     }
	     cnt=0;
	   }
	 }
	 else
	 cnt++;
	}
	return 0;
}