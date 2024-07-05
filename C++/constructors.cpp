#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    string company;
    int age;
    Employee(){
        cout<<"enter name "<<endl;
        cin>>name;
        cout<<"enter age "<<endl;
        cin>>age;
        cout<<"enter company "<<endl;
        cin>>company;
    }
    void display(){
        cout<<"name "<<name<<endl;
        cout<<"age "<<age<<endl;
        cout<<"company "<<company<<endl;
    }
};
int main(){
    Employee e1;
    e1.display();
    
}