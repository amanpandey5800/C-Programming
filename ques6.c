#include<stdio.h>
int main(){
    int n,i,max1,max2;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);}
    for(int i=0;i<n;i++){
        if(a[i]>max1){
            max2 = max1;
             max1 = a[i];
        }
        else if(a[i]>max2&&a[i]<max1){
            max2 = a[i];
        }
    }
    printf("second largest number is %d",max2);
}