#include <stdio.h>

int main() {
    int n, r=1;
    scanf("%d", &n);
    if (n >=0 && n <=12) {
        for (int i = 1; i <= n; i++) {
            r *=i;
        }
        printf("%d\n", r);
    }else {
        printf("invalid input\n");
    }
    return 0;
}