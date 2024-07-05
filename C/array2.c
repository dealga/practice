#include<stdio.h>

int main(){
    int arr[]={2,1,4,3,5,7,9};
    for(int i=0;i<7;i++){
        printf("%d ",*arr);  //points to the first elements of array, i.e gives the value
    }
    printf("\n");
    for(int i=0;i<7;i++){
        printf("%d ",*arr+1);  //points to the first elements of array, i.e gives the value and adds 1
    }
    printf("\n");
    for(int i=0;i<7;i++){
        printf("%d ",*(arr+1));
    }
    printf("\n");
    for(int i=0;i<7;i++){
        printf("%d ",arr+i); 
    }
    printf("\n");
    for(int i=0;i<7;i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");
    return 0;
}