#include<stdio.h>
int hammingweight(int n){
    int count=0;
    while (n>0){
        if (n&1==1){
            count++;
        }
        n=n>>1;
    }
}
int main(){
    printf("enter the required number");
    int n;
    scanf("%d",&n);
    int hw=hammingweight(n);
    printf("the hamming weight of %d is %d",n,hw);
    return 0;

}