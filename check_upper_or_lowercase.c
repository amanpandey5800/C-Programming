#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a>=65&&a<=90){
        printf("%c is uppercase",a);
    }
    else if(a>=90&&a<=122){
        printf("%c is lowercase",a);
    }

}