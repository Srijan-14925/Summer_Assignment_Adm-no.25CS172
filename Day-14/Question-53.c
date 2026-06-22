#include <stdio.h>
int main() {
    int a[100], n, x, i, f = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    for(i = 0; i < n; i++) if(a[i] == x) { f = 1; break; }
    if(f) printf("Found at %d", i+1); else printf("Not found");
    return 0;
}
