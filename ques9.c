#include<stdio.h>
int main(){
    int r,c,s,d,b;
    printf("enter the number of rows and columns: ");
    scanf("%d %d",&r,&c);
    int a[r][c];
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
             printf("enter the element at %d%d index",i,j);
            scanf("%d",&a[i][j]);
        }
     }
      printf("matrix is ......\n");
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("matrix after changing the diagonals: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                s=a[i][j];
            }
            else if(i+j==r-1){
                d=a[i][j];
            }
            b=s;
            s=d;
            d=s;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}