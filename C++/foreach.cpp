#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    cout<<"printing integer array"<<endl;
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;

    char letters[]={'d','h','a','n'};
    cout<<"printing character array"<<endl;
    for(char ch:letters){
        cout<<ch<<" ";
    }
    cout<<endl;
    return 0;
}