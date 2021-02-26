
#include <iostream>
#define player.h_included
#ifndef player.h_included
#endif player.h



class PlayerClass{

private:

    string forename;
    string surname;
    string position;
    int mobileNumber;



    public:

    Playerclass (string forename,string surname,string position,int mobileNumber){
    this->forename = forename;
    this->surname = surname;
    this-> position =  position;
    this-> mobileNumber =  mobileNumber;
    }
   // PlayerClass (int mobileNumber){
   //this-> mobileNumber =  mobileNumber;
   // }


    string getforename(){
        return forename;
   }

   string getsurname(){
   return surname;
   }

   string getposition(){
   return position;
   }
   int getmobileNumber(){
   return mobileNumber;
}

   void printPlayerInfo(){
   cout<<forename<<endl;
   cout<<surname<<endl;
   cout<< position<<endl;
   cout<< mobileNumber<<endl;
   }



};
