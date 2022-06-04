#include<stdio.h>
int main(){
    int r,c;
    printf("enter no of rows & columns: ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    int b[r][c];
    int d[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enter the element at %d%d index",i,j);
            scanf("%d",&a[i][j]);
        }
    }
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enter the element at %d%d index",i,j);
            scanf("%d",&b[i][j]);
        }
    }
         for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            d[i][j]=a[i][j]-b[i][j];
        }
    }
       for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           printf("%d ",d[i][j]);
        }
    }
}