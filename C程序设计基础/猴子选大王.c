#include<stdio.h> 

int main ()
{
    int N, i;
    scanf("%d", &N);
    int a[N+1];
    for (i=1; i<N+1; i++) { 
        a[i] = 0; 
    }
    
    int count = 0, quit = 0;
    if (N != 1) {
        for (i=1; i<N+1; i++) {
            if (a[i] == 0) count ++;
            if (count % 3 == 0 && a[i] == 0) {
                a[i] = 1;
                quit ++;
                if ( quit == N-1) break;
            }
            if (i == N) i = 0;
        }
    }

    for (i=1; i<N+1; i++) { 
        if (a[i] == 0) {
            printf("%d\n", i);
            break;
        }
    }

    return 0; 
}