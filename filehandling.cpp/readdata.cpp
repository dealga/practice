#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream myfile;
    myfile.open("C:\\Users\\user\\Desktop\\TAP\\filehandling.cpp\\file.txt", ios::in);
    if (myfile.is_open()){
        string line;
        while(getline(myfile,line)){
            cout<<line<<endl;
        }
    }
    myfile.close();
}