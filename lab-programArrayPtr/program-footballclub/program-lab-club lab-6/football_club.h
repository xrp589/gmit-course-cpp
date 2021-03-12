#pragma once
#include <iostream>
using namespace std;
#define football_club.h_included
#ifndef football_club.h_included
#endif football_club.h
#include "player.h"
#include <string>
class FootballClub{

private:
//FootballClub()
    string clubname;
    string district;
    string stripColour;
    string player squad["0 Rob","1 BoB","2 Huzie","3 FoB","4 pat","5 shane","6 mick"];
    string player team =[5];

public:

    FootballClub (string clubname,string district,string stripColour,string player squad){
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

  void addplayer(player temp,int position){
  team[position].setName(temp.getName());
   team[position].setDOB(temp.getDOB());
  }

};

