#ifndef LABINFO_H_INCLUDED
#define LABINFO_H_INCLUDED

using namespace std;


class labInfo{




public://Question 3/4
    string name;                             /* Public fucntion With in class called labinfo*/
    string labId;

 void printInfo (){
        cout<<"\n"<<name<<"\n"<<labId<<"\n"<<day<<"\n"<<month<<"\n"<<year<<endl;

    }




      void setdate(int dayTemp,int monthTemp,int yearTemp){ // This fucntion is to set the date
        day=dayTemp;
        month=monthTemp;
        year =yearTemp;
    }

    private:
    int day;
    int month;
    int year;

#endif // LABINFO_H_INCLUDED
