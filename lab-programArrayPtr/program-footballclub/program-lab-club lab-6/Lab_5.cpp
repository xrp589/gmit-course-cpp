#include <iostream>
#include <iomanip>

using namespace std;
#include "football_club.h"
#include "player.h"
/*
class FootballClub{

private:
    string clubname;
    string district;
    string stripColour;



public:
    //void printInfo()
    FootballClub(string clubname,string district){
    clubname=clubname;
    district=district;
    }


   string getclubname(){
        return clubname;


   void setclubname(string clubnameTmp)
   this->clubname=clubnameTmp;
   }

   void printInfo(){
   cout<<clubname<<endl;
   }



    };
*/
int main(){

    FootballClub object1("Deel Rovers","Cross");
    FootballClub object2 ("Maroon and White");
    object1.printInfo();
    object2.printInfo();

    Playerclass Team1 ("Dan","Theman","Full_Back");
    //PlayerClass Team2 ("#353_578");
    Team1.printPlayerInfo();
   // Team2.printPlayerInfo();

return 0;
}
