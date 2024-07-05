#include <stdio.h>
void countSort(int arr[], int size){
    // Find the max value
    int k = arr[0];
    for (int i=1; i<size; i++){
        if (arr[i] > k)
            k = arr[i];
    }
    // Create a count array of (0-9) ten elements
    int count[10] = {0};
    // Calculate the occurrence of each element in the array
    for (int i=0; i<size; i++){
        count[arr[i]]++;
    }
    // Calculate the cumulative count (Skip the first element)
    // Traverse till the max
    for (int i=1; i<=k; i++){
        // current = current + previous
        count[i] += count[i-1];
    }
    // Create an output array same size as the output array
    int output[size];
    // SRS Document Sample
    /*
     * Start from the end of the array
     * Find the array element
     * Find the cumulative count of the element in the count array
     * Decrement the count by 1
     * Go to the output array at that particular index
     * Store the input element at that index in the output array
     */
    for (int i=size-1; i>=0; i--){
        output[--count[arr[i]]] = arr[i];
    }
    // Copy the output back to the input array
    for (int i=0; i<size; i++){
        arr[i] = output[i];
    }
}
int main() {
    int arr[] = {1,3,2,3,4,1,6,4,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Before Sorting:\n");
    for (int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    countSort(arr, size);
    printf("After Sorting:\n");
    for (int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}