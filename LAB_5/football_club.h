<<<<<<< HEAD:LAB_5/football_club.h
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

=======
#pragma once
#include <iostream>

#define football_club.h_included
#ifndef football_club.h_included
#endif football_club.h
//#include "player.h"
using namespace std;
//#include <string>
class FootballClub{

private:
//FootballClub()
    string clubname;
    string district;
    string stripColour;
    string playersquad [7] = {"0 Rob","1 BoB","2 Huzie","3 FoB","4 pat","5 shane","6 mick"};
    string playerteam [5];

public:

    FootballClub (string clubname,string district,string stripColour,string playersquad){
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
   string getplayersquad(){
   return playersquad [7];
   }


   void setclubname(string clubnameTmp){
   this->clubname=clubnameTmp;
   }
   void printInfo(){
   cout<<"\nCLUB DETAILS\n"<<endl;
   cout<<clubname<<endl;
   cout<<district<<endl;
   cout<<stripColour<<endl;
   cout<<"\nSquad:\n";
   for(int i=4;i<5;i++){
    cout<<playersquad [i]<<endl;
   }

   }

/* void addplayer(playertemp,int position){
   team[position].setName(temp.getName());
   team[position].setDOB(temp.getDOB());
  }
*/
};

>>>>>>> 062a10fc102f7da1abb2533d4cc6c47531a645f1:LAB_6_program-footballclub/footballClub.h
