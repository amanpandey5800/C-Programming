#include<stdio.h>
int main(){
    int r,c,t=1;
    printf("enter the rows & coloumns: ");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c],d[r][c];
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
            if(a[i][j]!=b[i][j]){
                t=0;
                break;
            }
        }
        }
if(t==1){
    printf("\nequal");
}
else{
    printf("\nnot equal");
}
}