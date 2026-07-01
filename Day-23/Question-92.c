#include <stdio.h>
#include <string.h>
int main() {
    char s[100]="programming";
    int freq[256]={0},i,max=0,ch;
    for(i=0;s[i]!='\0';i++) freq[(int)s[i]]++;
    for(i=0;i<256;i++) if(freq[i]>max){max=freq[i];ch=i;}
    printf("%c",ch);
}
