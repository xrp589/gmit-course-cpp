#pragma once
#include <iostream>
using namespace std;
#define football_club.h_included
#ifndef football_club.h_included
#endif football_club.h
//#include "player.h"
//#include <string>
class FootballClub{

private:
//FootballClub()
    string clubname;
    string district;
    string stripColour;




public:

    FootballClub (string clubname,string district,string stripColour){
    this->clubname = clubname;
    this->district = district;

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
   void setclubname(string clubnameTmp){
   this->clubname=clubnameTmp;
   }
   void printInfo(){
   cout<<"\nCLUB DETAILS\n"<<endl;
   cout<<clubname<<endl;
   cout<<district<<endl;
   cout<<stripColour<<endl;



   }



};

