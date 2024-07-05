#include<iostream>
using namespace std;

class Employee{
private:    
    string name;
    string company;
    int age;
public:
    void setname(string name){
        this->name = name;
    }
    void setage(int age){
        this->age=age;
    }
    void setcompany(string company){
        this->company=company;
    }

    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    string getcompany(){
        return company;
    }

};
int main(){
    Employee e1;
    e1.setname("dhanush");
    e1.setcompany("google");
    e1.setage(21);
    cout<<e1.getname()<<endl;
    cout<<e1.getage()<<endl;
    cout<<e1.getcompany()<<endl;
}