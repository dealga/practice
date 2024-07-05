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
        cout<<"Name"<<Name<<endl;
        cout<<"Age"<<Age<<endl;
        cout<<"Company"<<Company<<endl;
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
};
class Lecturer : public Employee {
    public:
    string Subject;
    Lecturer(string name, int age, string company, string subject) : 
    Employee(name,age,company){
        Subject=subject;
    }
    void teach(){
        cout<<"lecturer is "<<Name<<"and teaches"<<Subject<<endl;
    }
};


int main(){
    Employee e1=Employee("dhanush",21,"tcs");
    e1.empDetails();
    softwaredeveloper s1=softwaredeveloper("Ramya", 32, "Bizotic", "python");
    s1.empDetails();
    s1.job();

    Lecturer li=Lecturer("sourav",40,"bizotic","C++");
    li.empDetails();
    li.teach();
}