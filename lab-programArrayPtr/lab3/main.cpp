#include <iostream>
#include <cmath>
#include <string>
using namespace std;
#include "functions.h"

    int main()
{
    LabInfo();// Print out user name and Lab#3
    Array6Num(); // A program to take in 6 numbers into an array
    scalarNum();// Enter a scalar number
    xmasTree();// Print xmas tree



    cout<< "\nEnter 6 Numbers\n";
    int x[6];
    for(int i =0;i<6;++i){
        cin>>x[i];
}
    for (int i =0;i<6;++i){
    cout<<x[i];

}
    cout<<"\n";
    int arraySize;
    x[arraySize];
    for (int i=0;i<arraySize;++i){
    cout<<&x [i]<< " "<<endl;     // memory address
}
    cout<< "\n Enter Greater than 0 and Less than 100";
    int i=0;
    while(i<arraySize){

    int temp;
    cin>>temp;

    if((temp>0)&&(temp<100)){              //Numbers should be Greater than 0 and Less than 100
    x[i]=temp;
        i++;
}


        else{
    cout<< "Incorrect Value"<<temp<< "Greater than 0 and Less than 100"<<i<<endl;
}




    int value;
    int scalar=0;                // user Enters 1 number called scalar
    cout<< "Enter scalar \n\n";
    cin>>scalar;
    cout<< "scalar num"<<scalar<<endl;
    cout <<" \n";


    value=100;                   // Pass ref
    int& valueRef=value;
    cout<<&value;
    cout<< value * scalar;


    int i,space,j,k;
                            // xmas tree
    cout<<"  Xmas tree?\n"<<endl;


    for (int i=1;i<7; i++){
    for(space=0;space<7-i; space++){

            cout<<" ";
}
    for(j=0; j<i; j++){
    cout<<"*";
}
    for ( int k=0; k<i-1; k++){
    cout<<"*";

}
   cout<<endl;
}
    for (i=0; i<4; i++){
    for(space=0; space<10/2; space++){
        cout<< " ";
}
    cout << "88";
    cout << "\n";
}

    return 0;
}
}
