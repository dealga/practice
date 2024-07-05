#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    string company;
    int age;
    void employeedetails(){
        cout<<"name "<<name<<endl;
        cout<<"age "<<age<<endl;
        cout<<"company "<<company<<endl;
    }
};
int main(){
    Employee e1;
    e1.name="arun";
    e1.age=21;
    e1.company="TCS";
    Employee e2=Employee();
    e2.name="dhanush";
    e2.age=21;
    e2.company="google";
    e2.employeedetails();
    return 0;
}