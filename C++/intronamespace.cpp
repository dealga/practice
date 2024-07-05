#include<iostream>
using namespace std;
namespace jitb2{
    void add(){
        cout<<"batch 2"<<endl;
    }
}
namespace jitb1{
    void add(){
        cout<<"batch1"<<endl;
    }
}
int main(){
    std::cout<<"hello world!"<<std:: endl;
    std::cout<<"JIT"<<endl;
    jitb2::add();
    jitb1::add();
    string name;
    cout<<"enter the string"<<endl;
    //cin>>name;
    getline(cin,name);
    cout<<name;
    return 0;
}