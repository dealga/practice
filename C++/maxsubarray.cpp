#include<iostream>
using namespace std;
int kadanealgo(int arr[], int size){
    int currentmax=arr[0];
    int globalmax=arr[0];
    for(int i=1;i<size;i++){
        currentmax=max(arr[i],currentmax+arr[i]);
        globalmax=max(currentmax,globalmax);
    }
    return globalmax;
}
int main(){
    int arr[]={5,-8,1,2,-1,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int maxsum=kadanealgo(arr,size);
    cout<<"the max sum is "<<maxsum;
}