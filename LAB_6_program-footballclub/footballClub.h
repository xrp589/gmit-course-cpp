#pragma once
#include <iostream>

#define footballClub.h_included
#ifndef footballClub.h
#endif footballClub.h
//#include "player.h"
using namespace std;
//#include <string>
class FootballClub{

private:
//FootballClub()
    string clubname;
    string district;
    string stripColour;
    string playersquad[7]={"0 Rob","1 BoB","2 Huzie","3 FoB","4 pat","5 shane","6 mick"};
    string playerteam[5]={"Rob","BoB","Huzie","FoB","pat"};

public:

    FootballClub (string clubname,string district,string stripColour,string playersquad,string playerteam){
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
   string getplayerteam(){
   return playerteam [5];
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
   for(int i=0;i<7;i++){
    cout<<playersquad [i]<<endl;

   }}
   void printteam(){
    cout<<"\nTeam :\n";
   for(int i=0;i<7;i++){

    cout<<playerteam [i]<<endl;
   }}
/* void addplayer(playertemp,int position){
   team[position].setName(temp.getName());
   team[position].setDOB(temp.getDOB());
  }
*/
};

