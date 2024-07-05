#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the size of the array\n");
    scanf("%d", &n);
    int * ptr;
    ptr=(int*)calloc(n,sizeof(int));
    printf("enter the array elements");
    for(int i=0;i<n;i++){
        scanf("%d", &ptr[i]);
    }
    printf("the array elements are\n");
    for(int i=0;i<n;i++){
        printf("%d", ptr[i]);
    }
}