#include <stdio.h>
int main() {
    int a[5]={1,2,3,4,5},b[5]={4,5,6,7,8},c[10],i,j,k=0,flag;
    for(i=0;i<5;i++) c[k++]=a[i];
    for(i=0;i<5;i++){
        flag=0;
        for(j=0;j<5;j++) if(b[i]==a[j]) flag=1;
        if(!flag) c[k++]=b[i];
    }
    for(i=0;i<k;i++) printf("%d ",c[i]);
}
