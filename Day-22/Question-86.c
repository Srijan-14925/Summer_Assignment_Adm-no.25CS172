#include <stdio.h>
int main() {
    char s[100]="Hello world this is C";
    int i,count=1;
    for(i=0;s[i]!='\0';i++)
        if(s[i]==' '&&s[i+1]!=' '&&s[i+1]!='\0') count++;
    printf("%d",count);
}
