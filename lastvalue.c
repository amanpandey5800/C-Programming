#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int j;
    while(n!=0){
        j=n%10;
        n=n/10;
    }
    printf("%d",j);
return 0;
}