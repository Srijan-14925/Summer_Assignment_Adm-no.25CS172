#include <stdio.h>
int armstrong(int n){
    int t=n,r,s=0;
    while(n>0){r=n%10;s+=r*r*r;n/=10;}
    return s==t;
}
int main(){
    int n;
    scanf("%d",&n);
    if(armstrong(n))printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}
