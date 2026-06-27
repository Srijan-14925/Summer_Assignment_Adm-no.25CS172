#include <stdio.h>
int main() {
    int a[2][2]={{1,2},{3,4}},t[2][2],i,j;
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            t[j][i]=a[i][j];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++) printf("%d ",t[i][j]);
        printf("\n");
    }
}
