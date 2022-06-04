#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int *p=a;
    for(int i=0;i<n;i++){
        scanf("%d",&*(p+i));
        }
        int swap;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(*(p+i)>*(p+j)){
                    swap=*(p+i);
                    *(p+i)=*(p+j);
                    *(p+j)=swap;
                }
            }
        }
        for(int i=0;i<n;i++){
            printf("%d ",*(p+i));
        }
    return 0;
}