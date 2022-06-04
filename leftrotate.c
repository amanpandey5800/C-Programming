#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int n1,c;
    scanf("%d",&n1);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n1;i++){
        c=a[0];
        for(int j=0;j<n-1;j++){
            a[j]=a[j+1];
        }
        a[n-1]=c;
    }
     for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
