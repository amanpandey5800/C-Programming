#include<stdio.h>
int main(){
    int a[5]={23,23,24,25,23};
    int i;
    int c;
    int d;
    int b[5]={23,45,12,67,43};
    int *p,*q;
    p=a;
    q=b;
    for(int i=0;i<5;i++){
        if(*(p+i)>*(q+i)){
            printf(" %d-%d riya scored more than sia\n",a[i],b[i]);
        }
        else if(*(p+i)==*(q+i)){
            printf("%d-%d both scored the same\n",a[i],b[i]);
        }
        else{
            printf("%d-%d sia scored more\n",a[i],b[i]);
        }
    }
    for(int i=0;i<5;i++){
        c+=*(p+i);
    }
    printf("average of riya marks are---- %d\n",c/5);
for(int i=0;i<5;i++){
        d+=*(q+i);
    }
    printf("average of sia marks are ---  %d\n",d/5);
if(c>d){
    printf("riya average is more");}
    else{
        printf("sia average is more");
    }
}