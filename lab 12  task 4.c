#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5,i;
    int *arr;

    
    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Array allocated with calloc:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);  
        arr[i] = i + 1;         
    }
    printf("\nModified array:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");
 
    free(arr);
 
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
 
    for (i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
    }

    printf("Array allocated with malloc:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  
    }
    printf("\n");
 
    free(arr);

    return 0;
}

