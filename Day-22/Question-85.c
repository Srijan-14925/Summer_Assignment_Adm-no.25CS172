#include <stdio.h>
#include <string.h>
int main() {
    char s[100]="madam";
    int i,len=strlen(s),flag=1;
    for(i=0;i<len/2;i++)
        if(s[i]!=s[len-i-1]) flag=0;
    if(flag) printf("Palindrome"); else printf("Not Palindrome");
}
