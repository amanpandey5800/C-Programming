#include<stdio.h>
int main(){
    int arr[3]={1,2,3};
    int *p[5]=arr;
    printf("%d",**p);
return 0;
}