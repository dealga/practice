#include<stdio.h>
int reverseinteger(int n){
    int ans=0;
    while(n>0){
        int digit=n%10;
        ans=ans*10 +digit;
        n=n/10;
    }
    return ans;
}

int main(){
    int n=scanf("%d",&n);
    int answer=reversestring(n);
    printf("the reservse of &d is &d",n,answer);
}