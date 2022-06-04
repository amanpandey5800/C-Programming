// // // #include<stdio.h>
// // // int main(){
// // //     for(int i=65;i<=90;i++){
// // //         if(i%2==0){
// // //             printf("%c",i);
// // //         }
// // //         else{
// // //         i+=32;
// // //     printf("%c",i);
// // // }        }
// // //     }
// // #include <stdio.h>
// // #include <stdlib.h>
 
// // int main()
// // {
 
// //     // This pointer will hold the
// //     // base address of the block created
// //     int* ptr;
// //     int n, i;
 
// //     // Get the number of elements for the array
// //     printf("Enter number of elements:");
// //     scanf("%d",&n);
// //     ptr = (int*)malloc(n * sizeof(int));
// //     // Check if the memory has been successfully
// //     // allocated by malloc or not
// //     if (ptr == NULL) {
// //         printf("Memory not allocated.\n");
// //         exit(0);
// //     }
// //     else {
 
// //         // Memory has been successfully allocated
// //         printf("Memory successfully allocated using malloc.\n");
 
// //         // Get the elements of the array
// //         for (i = 0; i < n; i++) {
// //             scanf("%d",&*(ptr+i));
// //         }
// //         // Print the elements of the array
// //         printf("The elements of the array are: ");
// //         for (i = 0; i < n; ++i) {
// //             printf("%d, ", ptr[i]);
// //         }
// //     }
 
// //     return 0;
// // }
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {

// 	// This pointer will hold the
// 	// base address of the block created
// 	int *ptr, *ptr1;
// 	int n, i;

// 	// Get the number of elements for the array
// 	n = 5;
// 	printf("Enter number of elements: %d\n", n);

// 	// Dynamically allocate memory using malloc()
// 	ptr = (int*)malloc(n * sizeof(int));

// 	// Dynamically allocate memory using calloc()
// 	ptr1 = (int*)calloc(n, sizeof(int));

// 	// Check if the memory has been successfully
// 	// allocated by malloc or not
// 	if (ptr == NULL || ptr1 == NULL) {
// 		printf("Memory not allocated.\n");
// 		exit(0);
// 	}
// 	else {

// 		// Memory has been successfully allocated
// 		printf("Memory successfully allocated using malloc.\n");

// 		// Free the memory
// 		free(ptr);
// 		printf("Malloc Memory successfully freed.\n");
//         printf("%d",*ptr);

// 		// Memory has been successfully allocated
// 		printf("\nMemory successfully allocated using calloc.\n");

// 		// Free the memory
// 		free(ptr1);
// 		printf("Calloc Memory successfully freed.\n");
// 	}

// 	return 0;
// }


#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int *ptr;
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&*(ptr+i));
    }
    for(int i=0;i<n;i++){
    printf("%d ",*(ptr+i));
    }
    printf("\n");
    int n1;
    scanf("%d",&n1);
    ptr=realloc(ptr,n1*sizeof(int));
    for(int i=5;i<n1;i++){
        ptr[i]=i+1;
    }
    for(int i=0;i<n1;i++){
        printf("%d",ptr[i]);
    }
return 0;
}