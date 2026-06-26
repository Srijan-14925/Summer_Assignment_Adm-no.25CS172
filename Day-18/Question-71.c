#include <stdio.h>
int main() {
    int a[5]={1,3,5,7,9},low=0,high=4,mid,key=7;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key){printf("Found");return 0;}
        else if(a[mid]<key) low=mid+1;
        else high=mid-1;
    }
    printf("Not Found");
}
