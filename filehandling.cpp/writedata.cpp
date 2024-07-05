#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream myfile;
    myfile.open("C:\\Users\\user\\Desktop\\TAP\\filehandling.cpp\\file.txt", ios::out); //out=write
    if (myfile.is_open()){
        myfile<<"dhanush the great\n";
        myfile<<"Line 1.\n";
        myfile.close();
    }
    myfile.open("C:\\Users\\user\\Desktop\\TAP\\filehandling.cpp\\file.txt", ios::app); //app=append
    if (myfile.is_open()){
        myfile<<"hi\n";
        myfile<<"Line 4.\n";   //data is overwritten
        myfile.close();      
    }
    //system("pause>0");   //stops till user presses any key

    return 0;
}