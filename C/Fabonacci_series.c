#include <stdio.h>

int main() {
    int n, i;
    unsigned long long t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %llu, %llu", t1, t2);

    for (i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf(", %llu", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");
    return 0;
}
