#include <stdio.h>
#include <string.h>
int main() {
    char s[100]="HelloWorld",r[100];
    int i,len=strlen(s);
    for(i=0;i<len;i++) r[i]=s[len-i-1];
    r[len]='\0';
    printf("%s",r);
}
