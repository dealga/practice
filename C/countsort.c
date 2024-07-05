#include<stdio.h>
void countsort(int arr[], int size){
    //find the max value
    int k=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>k){
            k=arr[i];
        }
    }
    int count[10] ={0};            //create a count array of(0-9) ten elements
    for(int i=0;i<size;i++){      //calculate the occurrence of each element in the array
        count[arr[i]]++;
    }
    //traverse till the max
    for(int i=1;i<=k;i++){//calculate the cumulative count(skip the first element)      
        count[i] += count[i-1];//current =current + previous   
    }
    //create an output array same size as the output array
    int output[size];
    //SRS Document Sample
    /*
    *start from the end of the array
    *find the array element
    *find the cumulative count of the element in the count array
    *decrement the count by 1
    *go to the output array at the particular index
    *store the input element at the index in the output array
    */
   for(int i=size-1;i>=0;i--)
   {
        output[--count[arr[i]]]=arr[i];
   }
    //copy the output back to the input array
    for(int i=0;i<size;i++){
        arr[i]=output[i];
    }
    
}

int main(){
    int arr[]={1,3,2,4,5,9,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("before sorting\n");
    for (int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("after sorting\n");
    countsort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
    
}