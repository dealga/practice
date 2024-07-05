#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("C:\\Users\\user\\Desktop\\TAP\\filehandling.c\\jit.txt","r");
    if(fptr==NULL){
        return -1;
    }
    else{
        printf("successfully loaded the file");
    }
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("\n%c",ch);
    char buffer[1000];
    while(fgets(buffer,sizeof(buffer),fptr)){
        printf("%s",buffer);
    }
    fclose(fptr);
    return 0;
}