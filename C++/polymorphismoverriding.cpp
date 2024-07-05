#include<iostream>
using namespace std;

class Employee{
    public:
    string Name;
    int Age;
    string Company;
    Employee(string name, int age, string company){
        Name=name;
        Age=age;
        Company=company;
    }
    void empDetails(){
        cout<<"Name "<<Name<<endl;
        cout<<"Age "<<Age<<endl;
        cout<<"Company "<<Company<<endl;
    }
    virtual void work(){
        cout<<Name<<" check emails, creates reports, adttends meetings, etc"<<endl;
    }
};

class softwaredeveloper : public Employee{
    public:
    string FavProLang;
    softwaredeveloper(string name, int age, string company,string favprolang) : 
    Employee(name,age,company)
    {
        FavProLang=favprolang;
    }
    void job(){
        cout << Name << " develops applications using "<< FavProLang << endl;
    }
    void work(){
        cout<<Name<<" fixes bugs and tests apps."<<endl;
    }
};
class Lecturer : public Employee {
    public:
    string Subject;
    Lecturer(string name, int age, string company, string subject) : 
    Employee(name,age,company){
        Subject=subject;
    }
    void teach(){
        cout<<"lecturer is "<<Name<<" and teaches "<<Subject<<endl;
    }
    void work(){
        cout<<Name<<" teaches "<<Subject<<endl;
    }
};


int main(){
    Employee e1=Employee("dhanush",21,"tcs");
    e1.empDetails();
    e1.work();  //will be the general work of the employee 
    softwaredeveloper s1=softwaredeveloper("Ramya", 32, "Bizotic", "python");
    s1.empDetails();
    s1.job();
    s1.work();
    Lecturer li=Lecturer("sourav",40,"bizotic","C++");
    li.empDetails();
    li.teach();
    li.work();
}