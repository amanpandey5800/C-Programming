#include<stdio.h>
int main(){
    int A = 3,B = 69;
    int *p=&A;
    int *q=&B;
    int **pp=&p;
    int **qq=&q;
    printf("%d\n",**pp);
    printf("%d\n",**qq);
    int c;
    c=**pp;
    **pp=**qq;
    **qq=c;
    printf("%d\n",**pp);
    printf("%d\n",**qq);
return 0;
}