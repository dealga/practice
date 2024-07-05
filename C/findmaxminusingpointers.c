#include<stdio.h>
void findmaxmin(int arr[], int size, int *max, int*min){
    for (int i=1;i<size;i++){
        if(arr[i]>*max){
            *max=arr[i];
        }
        if(arr[i]<*min){
            *min=arr[i];
        }
    }

    
}
int main(){
    int arr[]={8,-9,22,345,1,3};
    int max=arr[0];
    int min=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);
    findmaxmin(arr,size,&max,&min);
    printf("the max is %d and the min is %d",max,min);
    return 0;
}