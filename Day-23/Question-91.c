#include <stdio.h>
#include <string.h>
int main() {
    char s1[100]="listen",s2[100]="silent";
    int freq1[256]={0},freq2[256]={0},i,flag=1;
    for(i=0;s1[i]!='\0';i++) freq1[(int)s1[i]]++;
    for(i=0;s2[i]!='\0';i++) freq2[(int)s2[i]]++;
    for(i=0;i<256;i++) if(freq1[i]!=freq2[i]) flag=0;
    if(flag) printf("Anagram"); else printf("Not Anagram");
}
