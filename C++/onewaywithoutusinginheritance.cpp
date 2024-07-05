#include <iostream>
using namespace std;
class Payment {
public:
    double admFees;
    double regFess;
    double balAmt;
    Payment(double aFees, double rFees, double bAmt){
        admFees = aFees;
        regFess = rFees;
        balAmt = bAmt;
    }
};
class Information {
public:
    string blockNo;
    int floorNo;
    int roomNo;
    int bedNo;
    Information(string bNo, int fNo, int rNo, int bdNo){
        blockNo = bNo;
        floorNo = fNo;
        roomNo = rNo;
        bedNo = bdNo;
    }
};
class Patient {
public:
    string patientName;
    int patientAge;
    string disease;
    int dateOfBirth;
    Information * info;
    Payment * pay;
    Patient(string name, int age, string d, int dob, Information& i, Payment& p){
        patientName = name;
        patientAge = age;
        disease = d;
        dateOfBirth = dob;
        info = &i;
        pay = &p;
    }
    void patientDetails(){
        cout << "The patient details are: " << endl;
        cout << "Name: "<< patientName << endl;
        cout << "Age: "<< patientAge << endl;
        cout << "Disease: "<< disease << endl;
        cout << "DateOfBirth "<< dateOfBirth << endl;
        cout << "Block Number "<< info->blockNo << endl;
        cout << "Floor Number: "<< info->floorNo << endl;
        cout << "Room Number: "<< info->roomNo << endl;
        cout << "Bed Number: "<< info->bedNo << endl;
        cout << "Admission Fees: "<< pay->admFees << endl;
        cout << "Registration Fees: "<< pay->regFess << endl;
        cout << "Balance Amount: "<< pay->balAmt << endl;
    }

};
int main() {
    Information i1=Information("a",3, 301, 12);
    Payment p1=Payment(100.f, 200.f,300.f);
    Patient p11=Patient("dhanush",21,"influenza",1412,i1,p1);
    p11.patientDetails();
    return 0;
}