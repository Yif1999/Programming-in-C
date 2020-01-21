#include <stdio.h>

int main(void) {
    int n, months[10000], i;

    scanf("%d", &n);
    for (i = 1;; i++) {
        if (i == 1 || i == 2) {
            months[i] = 1;
        }
        else {
            months[i] = months[i - 2] + months[i - 1];
        }
        if (months[i] >= n) {
            printf("%d\n", i);

            return 0;
        }
    }
}