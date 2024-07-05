#include<stdio.h>

int * function(){
    static int x=10;
    printf("the address of x is %p",&x);
    return &x;
}

int main(){
    int *ptr=function();
    printf("the value of x is %d",*ptr);
    return 0;
}
