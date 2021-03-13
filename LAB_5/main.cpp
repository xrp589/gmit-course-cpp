#include <iostream>
#include <iomanip>

using namespace std;
#include "football_club.h"
#include "player.h"



int main(){

    FootballClub object1("Deel Rovers","Cross","Maroon and White");
    object1.printInfo();


    PlayerClass Pclass("Dan","The Man","Full_Back","354 8734567");
    Pclass.printPlayerInfo();




return 0;
}
