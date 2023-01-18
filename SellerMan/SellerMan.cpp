using namespace std;

#include <iostream>
#include <string>
#include "Pokemon.h"
#include "Abilities.h"

int main()
{
    cout << "Let's play Pokemon !" << endl;

    Pokemon pikachu = Pokemon("Pikachu", "Petit, jaune et electrique", 15); //
    Pokemon bulbizarre("Bulbizarre", "Gros, vert et feuillut", 25); //Better version parce que evite de creer un double
    Abilities Eclair("Eclair", "Lance un eclair sur l'ennemi", 10, 5);
    Abilities LanceFeuille("LanceFeuille", "Lance des feuilles tranchantes", 12, 7);

    pikachu.Display();
    bulbizarre.Display();

    pikachu.Learn(Eclair, 0);
    bulbizarre.Learn(LanceFeuille, 0);

    pikachu.GoAttack(bulbizarre, 0);

    bulbizarre.GoAttack(pikachu, 0);

    pikachu.GoAttack(bulbizarre, 0);
}

