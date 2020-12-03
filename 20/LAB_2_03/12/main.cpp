#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "functions.h"

int main()
{
    LabInfo();

    calculate(23,45);
    Check(0);

    {

 //Question 4 select the question/answer. Use a switch statement.
    int a,age;
    cout << "Task 4 switch\n\n";
    cout<< "select one of the folling questions\n";

    cout << "Q1 what is your age:\n";
    cout << "Q2 what age did you go to college\n ENTER QUESTION NUMBER:\n";
    cin>>a;

    switch(a){
case 1:
    cout<< "what is your age:\n";
    cin>>age;
    if (age>40){
        cout << "YOU ARE TOO OLD FOR COLLEGE.\n"<<endl;
}     else {
        cout << "Enjoy your youth\n\n";
     }

    break;
case 2:
    cout<< "what age did you go to college:\n";
    cin>>age;
    if  (age<40){
    cout << "Now that is the right time for college.\n "<<endl;}
    else if (age>40) {

     cout << "YOU ARE TOO OLD FOR COLLEGE.\n"<<endl;}
     else {
        cout<< "Incorrect input.\n"<<endl;
     }
     break;
    }



    }

    //functions

    circleArea ();
    rectangleArea ();
    TemperatureHumidityAlarm ();


                               // Question 8 range of values from 0 to 120 meters, in 1 meter steps.

    float PI=3.14159, radius, area;

    for (float radius = 0; radius <= 120;++ radius){





    area = PI* radius * radius;
    cout << "area of a circle\n"<<area << " : metres squared \n" ;
    cout << "\n\n"<<endl;
    }

    convertCF ();
    EvenNumbers ();
    oddNum ();
    randnum ();
    number1TO9 ();
    Finished ();
    return 0;
}
