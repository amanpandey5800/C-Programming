#include<stdio.h>
int main(){
    int r,c;
    printf("enter the rows and columns: ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enter the element at %d%d index",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            a[i][j] = n*a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}