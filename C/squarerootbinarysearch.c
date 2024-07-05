#include<stdio.h>
int squarerootbinarysearch(int arr[], int size, int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        int mul=arr[mid]*arr[mid];
        if(mul==n){
            return mid;
        }
        else if(mul<n){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return mid;
}

int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
        arr[i]=i;
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    int sqrroot=squarerootbinarysearch(arr, size, n);
    printf("the square root of %d is %d",n,sqrroot);
    return 0;
}

