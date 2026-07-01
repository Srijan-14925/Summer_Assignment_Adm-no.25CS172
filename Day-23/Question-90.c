#include <stdio.h>
#include <string.h>
int main() {
    char s[100]="swiss";
    int freq[256]={0},i;
    for(i=0;s[i]!='\0';i++){
        freq[(int)s[i]]++;
        if(freq[(int)s[i]]==2){printf("%c",s[i]);return 0;}
    }
}
