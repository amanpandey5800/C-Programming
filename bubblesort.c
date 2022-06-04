#include<stdio.h>
int main(){
    int n,i,c;
    scanf("%d",&n);
    int arr[n];
    int n1=n;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    while(n>0){
        for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                c=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=c;
            }
        }
        n--;
    }
    for(int i=0;i<n1;i++){
        printf("%d, ",arr[i]);
    }
}