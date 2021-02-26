#include <iostream>
#define football_club.h_included
#ifndef football_club.h_included
#endif football_club.h
class FootballClub{

private:
//FootballClub()
    string clubname;
    string district;
    string stripColour;



public:

    FootballClub (string clubname,string district){
    this->clubname = clubname;
    this->district = district;
    }
    FootballClub (string stripColour){
    this->stripColour = stripColour;
    }


   string getclubname(){
        return clubname;
   }

   string getdistrict(){
   return district;
   }

   string getstripColour(){
   return stripColour;
   }
 //  void setclubname(string clubname)
 //  this->clubname=clubnameTmp;


   void printInfo(){
   cout<<clubname<<endl;
   cout<<district<<endl;
   cout<<stripColour<<endl;
   }



};

