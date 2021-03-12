#include <iostream>
#include <iomanip>

using namespace std;
#include "football_club.h"
#include "player.h"



int main(){

    FootballClub object1("Deel Rovers","Cross","Maroon and White");
    object1.printInfo();


    PlayerClass Pclass("Dan","Theman","Full_Back","354 8734567");
    Pclass.printPlayerInfo();

    player squad [40];

    int numsquad=40;
    FootballClub player1;
    player1.addplayer();

    player1.setName("Rob");
    player1.setDOB ("1981");

    FootballClub player2;
    player1.addplayer();

    player2.setName("FOB");
    player2.setDOB ("1982");
    //for(int i=0;i<30;++i)
return 0;
}
