#include <stdio.h>
int palindrome(int n){
    int r,s=0,t=n;
    while(n>0){r=n%10;s=s*10+r;n/=10;}
    return s==t;
}
int main(){
    int n;
    scanf("%d",&n);
    if(palindrome(n))printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
