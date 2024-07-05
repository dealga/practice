#include<iostream>
#include<cstdlib>

using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array: "<<endl;
    cin>>n;
    int * myarray = new int[n];
    int ** matrix = new int * [n];
    delete[] myarray;   

    delete[] matrix;  
    return 0;
}