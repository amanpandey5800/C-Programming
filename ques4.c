#include<stdio.h>
int main(){
    int r,c,r2,c2;
    printf("enter the rows & coloumns for matrix 1: ");
    scanf("%d %d",&r,&c);
    printf("enter the rows & coloumns for matrix 1: ");
    scanf("%d %d",&r2,&c2);
    int a[r][c],b[r2][c2],d[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
             printf("enter the element at %d%d index",i,j);
            scanf("%d",&a[i][j]);
        }
     }
       for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
             printf("enter the element at %d%d index",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    if(c==r2){
    for(int i=0;i<r;i++){
        for(int j=0;j<c2;j++){
            d[i][j]=0;
            for(int k=0;k<r2;k++){
                d[i][j]+=a[i][k]*b[k][j];
          }
        }
    }
    }
    else{
        printf("matrix can't be multiplied");
        return 0;
    }
printf("the multiplication of 2 matrix is : \n");
        for(int i=0;i<r;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
}