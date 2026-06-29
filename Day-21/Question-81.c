#include <stdio.h>
int main() {
    char s[100]="HelloWorld";
    int i=0;
    while(s[i]!='\0') i++;
    printf("%d",i);
}
