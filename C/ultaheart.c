#include<stdio.h>
int main(){
    for (int r=0;r<6;r++){
        for (int c=0;c<7;c++){
            if(r+c==3 || c-r==3 || r==4 && c%3 ==0 || r==5 && c%3!=0){
                printf("*");
            }
            else{
                printf(" ");

            }
        }
        printf("\n");
    }
}