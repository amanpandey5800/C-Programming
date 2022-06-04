#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   int swap;
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
         if(a[i]<a[j]){
            swap=a[i];
            a[i]=a[j];
            a[j]=swap;
         }
      }
   }
   for(int i=0;i<n;i++){
      printf("%d ",a[i]);
   }
   }
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//    int i, j, position, swap;
//    for(int i=0;i<n;i++){
//        scanf("%d",&arr[i]); 
//    }
//    for (i = 0; i < (n - 1); i++) {
//       for (j = i + 1; j < n; j++) {
//          if (arr[i] > arr[j])
//      {
//          swap = arr[i];
//          arr[i] = arr[j];
//          arr[j] = swap;
//       }}
//    }
//    for (i = 0; i < n; i++){
//       printf("%d,", arr[i]);}
//    return 0;
// }
// #include<stdio.h>
// int main(){
//     int n,i,j,temp,c;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<n-1;i++){
//         temp =i;
//     for(int j=i+1;j<n;j++){
//         if(a[temp]>a[j]){
//             temp=j;
//         }
//         if(temp!=i){
//             c=a[i];
//             a[i]=a[temp];
//             a[temp]=c;

//         }
//     }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
// }