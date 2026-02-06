// Print a below pattern using nested for loop in C language:
// _ _ _ _ 10

// _ _ _ 9 10

// _ _ 8 9 10

// _ 7 8 9 10

// 6 7 8 9 10

// Note: Consider _ as a whitespace

#include <stdio.h>

int main() {
    int i, j, k;

    for(i = 10; i >= 6; i--) {

   
        for(j = 6; j < i; j++) {
            printf("  ");
        }

      
        for(k = i; k <= 10; k++) {
            printf("%d ", k);
        }

        printf("\n");
    }
    return 0;
}
