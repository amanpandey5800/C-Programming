#include<stdio.h>
int main(){
    int n,i,c;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[0]<a[i]){
            c=a[0];
            a[0]=a[i];
            a[i]=c;
        }
    }
    printf("\n");
    printf("%d",a[0]);
}