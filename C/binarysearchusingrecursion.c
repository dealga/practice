#include<stdio.h>
int binarysearch(int arr[], int high, int low, int key){
    if(low<=high){
        int mid=low+(high-low)/2;
        if (arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            return binarysearch(arr,mid-1,low,key);
        }
        else{
            return binarysearch(arr,high,mid+1,key);
        }
    }
    return -1;
}
int main(){
    int arr[]={2,4,6,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("element found at %d",binarysearch(arr,size,0,9));
    
}