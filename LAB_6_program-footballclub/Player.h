<<<<<<< HEAD:LAB_5/Player.h
#pragma once
#define football_club.h_included
#ifndef player.h_included
#endif player.h


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

=======
#pragma once
//#include <iostream>
//#define player.h_included
#define football_club.h_included
#ifndef player.h_included
#endif player.h
//#include <iomanip>

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

>>>>>>> 062a10fc102f7da1abb2533d4cc6c47531a645f1:LAB_6_program-footballclub/Player.h
