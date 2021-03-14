#include <iostream>
#include <iomanip>
#include "footballClub.h"
#include "Player.h"
using namespace std;




int main(){

PlayerClass Pclass("Dan","Theman","Full_Back","354 8734567");
    Pclass.printPlayerInfo();



    FootballClub object1("Deel Rovers","Cross","Maroon and White","bob","");
    object1.printInfo();
    object1.printteam();


   // PlayerClass Pclass("Dan","Theman","Full_Back","354 8734567");
    //Pclass.printPlayerInfo();



    //int numsquad=40;
   // FootballClub player1;
   // player1.addplayer();

   // player1.setName("Rob");
   // player1.setDOB ("1981");

   // FootballClub player2;
   // player1.addplayer();

    //player2.setName("FOB");
    //player2.setDOB ("1982");
    //for(int i=0;i<30;++i)
return 0;
}
