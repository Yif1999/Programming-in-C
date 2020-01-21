#include <stdio.h>  
#include <stdlib.h>  
int main()  
{  
    int i, j, n1, n2, repeat, existence, index = 0;  
    scanf("%d", &n1); 
    int num1[n1];   
    for (i=0; i<n1; i++) {  
        scanf("%d", &num1[i]);  
    }  
    scanf("%d", &n2);
    int num2[n2], num[n1+n2];    
    for (i=0; i<n2; i++) {  
        scanf("%d", &num2[i]);  
    }  
    for (i=0; i<n1; i++) {  
        repeat = 0;  
        for (j=0; j<n2; j++) {  
            if (num1[i] == num2[j] ) {  
                repeat = 1;  
                break;  
            }  
        }  
        if (repeat==0) {  
            existence = 0;  
            for (j=0; j<index; j++) {  
                if (num1[i] == num[j]) {  
                    existence = 1;  
                    break;  
                }  
            }  
            if (existence==0) {  
                num[index] = num1[i];  
                index++;
            }  
        }  
    }  
    for (i=0; i<n2; i++) {  
        repeat = 0;  
        for (j=0; j<n1; j++) {  
            if (num2[i] == num1[j]) {  
                repeat = 1;  
                break;  
            }  
        }  
        if (repeat==0) {  
            existence = 0;  
            for (j=0; j<index; j++) {  
                if (num2[i] == num[j]) {  
                    existence = 1;  
                    break;  
                }  
            }  
            if (existence==0) {  
                num[index++] = num2[i];  
            }  
        }  
    }  
    for (i=0; i<index; i++) { 
        if(i==0){
            printf("%d", num[i]);   
        } else{
            printf(" %d", num[i]);  
        }    
    }  
    return 0;  
}  