#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}