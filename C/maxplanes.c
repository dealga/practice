#include<stdio.h>
int maxregions(int n){
    int regions=(n*(n+1))/2 +1;
    return regions;
}

int main(){
    int n;
    scanf("%d",&n);
    int mregions=maxregions(n);
    printf("the max regions for %d straight lines is %d",n,maxregions);
    return 0;
}