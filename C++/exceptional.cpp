#include<iostream>
using namespace std;

class printer{
    public:
    string _name;
    int _availablepaper;
    printer(string name, int paper){
        _name=name;
        _availablepaper=paper;
    }
    void printdoc(string txtdoc){
        int requiredpaper=txtdoc.length()/10;
        if(requiredpaper>_availablepaper){
            //throw 404;
            throw "out of paper";
        }
        cout<<"printing....!!!"<<txtdoc<<endl;
        _availablepaper-=requiredpaper;

    }
};
int main(){
    printer myprinter("HP", 3);
    try{
        myprinter.printdoc("dhanush is a software dev");
        myprinter.printdoc("bob is a software dev");
        myprinter.printdoc("jack is a software dev");
        myprinter.printdoc("john is a software dev");
    }
    catch(int errorCode){
        cout<<errorCode<<" no paper available"<<endl;
    }
    catch(const char * txtException){
        cout<<"exception: "<<txtException<<endl;
    }
    catch(...){
        cout<<"something unexpected happened"<<endl;
    }
    cout<<"remaining paper "<<myprinter._availablepaper<<endl;
    return 0;
}