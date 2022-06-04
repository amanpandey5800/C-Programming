// prime numbers in an array
// #include<stdio.h>
// int main(){
//     int n;
//     int f;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<n;i++){
//         f=0;
//         for(int j=2;j<a[i];j++){
//             if(a[i]%j==0){
//                 f=1;
//                 break;
//             }
//         }
//         if(f==0){
//             printf("prime numbers are %d ",a[i]);
//         }
//     }
// }
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int *p;
    p=a;
    int f;
    for(int i=0;i<n;i++){
        scanf("%d",&*(p+i));
    }
    int sum;
    int i ;
    for(int i=0;i<n;i++){
        f=0;
        sum=0;
        for(int j=2;j<*(p+i);j++){
            if(*(p+i)%j==0){
                f=1;
                break;
            }
            else{
                sum+=*(p+i);
            }
        }
        if(f==0){
            printf("%d  ",*(p+i));

        }
}
}