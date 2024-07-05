#include<iostream>
using namespace std;
class MyClass {
private:
    int data;
public:
    MyClass(){
        cout<<"default constructor"<<endl;
    }
    //MyClass(int value){   //parameterized constructor
    //    data=value;
    //    cout<<"parameterized constructor"<<endl;
    //}
    MyClass(int value) : data(value){     //another way of writing parameterized constructor
        cout<<"parameterized constructor"<<endl;
    }
    MyClass(MyClass &other) : data(other.data){
        cout<<"copy constructor"<<endl;
    }
    void display(){
        cout<<"data: "<<data<<endl;
    }
};
int main(){
    MyClass o1;
    MyClass o2(12);
    MyClass o3=o2;   //one way of using copy constructor
    MyClass o4(o3);  //another way of using copy constructor
    o1.display();
    o2.display();
    o3.display();
    o4.display();
    return 0;
}
