#include<stdio.h>

int main() {
    int n;

    // Get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];  // Declare an array of size n

    // Take input for array elements
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);  // Corrected scanf for storing elements
    }

    // Print the array elements
    printf("The array elements are: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);  // Corrected printf for displaying elements
    }
    printf("Array in reverse order");
    for(int i=n-1;i>=0;i--){
         printf("arr[%d] = %d\n", i, arr[i]); 
    }
    
    return 0;
}
