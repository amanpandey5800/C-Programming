#include<stdio.h>
int main(){
    int n,n1;
    scanf("%d",&n);
    scanf("%d",&n1);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n1;i++){
        int c=a[n-1];
        for(int j=n-1;j>0;j--){
            a[j]=a[j-1];
        }
        a[0]=c;
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}