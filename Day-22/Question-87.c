#include <stdio.h>
#include <string.h>
int main() {
    char s[100]="programming";
    int freq[256]={0},i;
    for(i=0;s[i]!='\0';i++) freq[(int)s[i]]++;
    for(i=0;i<256;i++) if(freq[i]!=0) printf("%c=%d ",i,freq[i]);
}
