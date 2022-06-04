#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int (*ptr)[n];
    ptr=&a;
    for(int i=0;i<n;i++){
        scanf("%d",&*(*ptr+i));
    }
    int f=0;
       for(int i=0;i<n;i++){
        printf("%d ",*(*ptr+i));
    }
    for(int i=0;i<n;i++){
        for(int j=2;j<*(*ptr+i);j++){
            if(*(*ptr+i)%j==0){
                f=0;
                break;
            }
        }
        if(f==1){
            printf("%d",*(*ptr+i));
        }
    }
return 0;
}