#include<stdio.h>
void zigzag(int);
int main(){
    zigzag(10);
    return 0;
}

void zigzag(int cols){
    for(int r=1;r<4;r++){
        for (int c=1;c<cols;c++){
            if ((r+c)%4==0 || r==2 && c%4==0){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}