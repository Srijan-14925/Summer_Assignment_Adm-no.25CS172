#include <stdio.h>
int main() {
    int n, i, j, largest = 0, flag;
    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            flag = 0;
            for (j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) largest = i;
        }
    }
    printf("%d", largest);
    return 0;
}
