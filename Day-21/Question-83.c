#include <stdio.h>
int main() {
    char s[100]="Programming";
    int i,v=0,c=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
           s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') v++;
        else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) c++;
    }
    printf("Vowels=%d Consonants=%d",v,c);
}
