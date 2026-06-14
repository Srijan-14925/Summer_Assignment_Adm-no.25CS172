#include <stdio.h>
int main() {
    int x, n, i;
    long res = 1;
    scanf("%d%d", &x, &n);
    for(i = 1; i <= n; i++)
        res *= x;
    printf("%ld", res);
    return 0;
}
