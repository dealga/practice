#include<iostream>
using namespace std;
void mergetwosortedarrays(int a1[], int s1, int a2[], int s2, int a3[]){
    int i=0;
    int j=0;
    int k=0;
    //for equal arrays
        while(i<s1 && j<s2){
            if(a1[i] < a2[j]){
                a3[k++]=a1[i++];
            }
            else{
                a3[k++]=a2[j++];
            }
        }
        //remaining part in first array if any
        while(i<s1){
            a3[k++]=a1[i++];
        }
        while(j<s2){
            a3[k++]=a2[j++];
        }
    }

int main(){
    int a1[5]={1,3,5,7,9};
    int a2[3]={2,4,6};
    int a3[8]={0};
    mergetwosortedarrays(a1,5,a2,3,a3);
    for(int x:a3){
        cout<<x<<" ";
    }
}