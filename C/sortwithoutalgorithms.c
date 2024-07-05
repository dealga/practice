#include<stdio.h>
int sortwithoutzero(int arr[], int size){
    int c0=0;
    int c1=0;
    int c2=0;
    for (int i=0;i<5;i++){
        if (arr[i]==0){
            c0++;
        }
        else if(arr[i]==1){
            c1++;
        }
        else
            c2++;
    }
    int index=0;
    while (c0>0){
        arr[index++]=0;
        c0--;
    }
    while(c1>0){
        arr[index++]=1;
        c1--;

    }
    while(c2>0){
        arr[index++]=2;
        c2--;
    }


}


int main(){
    int arr[]={2,1,0,2,0,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("before sorting\n");
    for (int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    sortwithoutzero(arr,size);
    for (int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}
