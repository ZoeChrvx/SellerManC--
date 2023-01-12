using namespace std;

#include <iostream>
#include <string>
#include "Pokemon.h"

int main()
{
    cout << "Let's play Pokemon !" << endl;

    Pokemon pikachu = Pokemon("Pikachu", "Small, yellow and electric", 15); //
    Pokemon bulbizarre("Bulbizarre", "Small, green and had a lot of leaf", 25); //Better version pqrce aue 2vite de cr2er un double

    pikachu.Display();
    bulbizarre.Display();

    pikachu.GoAttack(bulbizarre, 10);

    pikachu.Display();
    bulbizarre.Display();

    bulbizarre.GoAttack(pikachu, 12);

    pikachu.Display();
    bulbizarre.Display();

    pikachu.GoAttack(bulbizarre, 15);

    pikachu.Display();
    bulbizarre.Display();
}

