#include<stdio.h>
int main(){
    int a=62,n=4,c=9;
    int *p,*q,*r;
    p=&a;
    q=&n;
    r=&c;
    if(*p>*q&&*p>*r){
        printf("hello");
    }
return 0;
}