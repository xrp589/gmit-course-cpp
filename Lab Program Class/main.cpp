#include <iostream>
#include "LabInfo.h"

using namespace std;

void LabInfo(){
    cout << "Ronan "<< endl;                 /*Question 1 Print out my name and lab call using classes*/
    cout << "\n Lab using classes"<< endl;
}

class labInfo{




public://Question 3/4
    string name;                             /* Public fucntion With in class called labinfo*/
    string labId;
     void printInfo (){
        cout<<"\n"<<name<<"\n"<<labId<<"\n"<<day<<"\n"<<month<<"\n"<<year<<endl;
    }

private:
    int day;
    int month;
    int year;


    void setdate(int dayTemp,int monthTemp,int yearTemp){ // This fucntion is to set the date
        day=dayTemp;
        month=monthTemp;
        year =yearTemp;
    }

};




int main()
{
    LabInfo();
    labInfo R1;
    R1.name = "Ronan O Boyle";
    R1.labId = "Lab 4";
    R1.day = "Friday";
    R1.month = "Feb";
    R1.year = "2021";
    R1. printInfo ();
    R1. setdate ();
    return 0;
}
