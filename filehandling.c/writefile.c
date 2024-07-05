#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("C:\\Users\\user\\Desktop\\TAP\\filehandling.c\\jit2.txt","a");
    if(fptr==NULL){
        return -1;
    }
    else{
        printf("successfully loaded the file\n");
    }
    fprintf(fptr,"\ndhanush the great");


    return 0;
}