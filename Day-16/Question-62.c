#include <stdio.h>
int main() {
    int a[100], n, i, j, max = 0, freq, elem;
    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    for(i = 0; i < n; i++) {
        freq = 0;
        for(j = 0; j < n; j++) if(a[i] == a[j]) freq++;
        if(freq > max) { max = freq; elem = a[i]; }
    }
    printf("%d", elem);
    return 0;
}
