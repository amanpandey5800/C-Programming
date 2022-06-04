#include<stdio.h>
int main(){
    int r,c,sum=0;
    printf("enter the number of rows & columns: ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enter the element at %d%d index\n",i,j);
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
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
      sum+=a[i][j];
        }
        printf("sum of %d row is %d\n",i,sum);
        sum=0;
    }
    for(int j=0;j<r;j++){
        sum=0;
        for(int i=0;i<c;i++){
            sum+=a[i][j];
        }
          printf("sum of %d column is %d\n",j,sum);
    }
}