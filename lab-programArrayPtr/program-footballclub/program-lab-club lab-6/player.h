#pragma once
#include <iostream>
//#define player.h_included
#define football_club.h_included
#ifndef player.h_included
#endif player.h
#include <iomanip>

using namespace std;


class PlayerClass{

private:

    string forename;
    string surname;
    string position;
    string mobileNumber;



    public:

    PlayerClass (string forename,string surname,string position,string mobileNumber){
    this->forename = forename;
    this->surname = surname;
    this-> position =  position;
    this-> mobileNumber =  mobileNumber;
    }


    string getforename(){
        return forename;
   }

   string getsurname(){
   return surname;
   }

   string getposition(){
   return position;
   }
   string getmobileNumber(){
   return mobileNumber;
}

   void printPlayerInfo(){
       cout<<"\nPLAYER PERSONAL INFO\n"<<endl;
   cout<<forename<<endl;
   cout<<surname<<endl;
   cout<< position<<endl;
   cout<< mobileNumber<<endl;
   }



};
