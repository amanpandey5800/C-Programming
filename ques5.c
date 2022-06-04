#include<stdio.h>
int main(){
    int n,i,c,max,min;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        else if(a[i]<min){
            min=a[i];
        }
     
    }
    printf("%d is the largest element\n",max);
    printf("%d is the smallest element",min);
}