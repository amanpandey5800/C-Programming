#include<stdio.h>
int main(){
    char a[100];
    scanf("%[^\n]",a);
    char  *p;
    char b[12];
    char *q;
    q=b;
    p=a;
    for(int i=0;*(p+i)!=0;i++){
        if(*(p+i)=='A'){
            *(q+i)='A';
        }
        else{
            *(q+i)="\0";
            }
        }   
    printf("%s",a);
return 0;}