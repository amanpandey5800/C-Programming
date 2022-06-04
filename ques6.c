#include<stdio.h>
int main(){
    int r,c,s=0;
    printf("enter the rows and columns: ");
    scanf("%d %d ",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enter the element at %d%d index\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
              printf("%d",a[i][j]);
            }
        }
    }
}