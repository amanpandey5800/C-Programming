#include<stdio.h>
int main(){
    int n,i,n1;
    scanf("%d",&n);
      scanf("%d",&n1); 
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]==n1){
        printf("%d",i);
        break;
    }

    }
}