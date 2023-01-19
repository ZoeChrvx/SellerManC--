using namespace std;

#include <iostream>
#include <string>
#include "Pokemon.h"
#include "Abilities.h"
#include <random>

int main()
{
    //vv Ca c'est pour faire une random seed
    srand(time(NULL));

    cout << "Let's play Pokemon !" << endl;

    Pokemon pikachu = Pokemon("Pikachu", "Petit, jaune et electrique.", 15);
    Pokemon bulbizarre("Bulbizarre", "Gros, vert et feuillut.", 25); //Better version parce que evite de creer un double
    Abilities Eclair("Eclair", "Lance un eclair sur l'ennemi.", 10, 10);
    Abilities QueueDeFer("Queue de Fer", "Attaque violement l'ennemi avec sa queue.", 7, 15);
    Abilities LanceFeuille("LanceFeuille", "Lance des feuilles tranchantes.", 12, 10);
    Abilities CanonGrain("Canon Graine", "Mitraille son adversaire avec des graines.", 5, 15);

    cout << "Salut jeune aventurier, voici ton pokemon, " << endl;
    pikachu.Display();
    cout << "Et voici ton adversaire, " << endl;
    bulbizarre.Display();
    cout << "Et voici les attaques qu'ils ont. " << endl;

    pikachu.Learn(Eclair, 0);
    pikachu.Learn(QueueDeFer, 1);
    bulbizarre.Learn(LanceFeuille, 0);
    bulbizarre.Learn(CanonGrain, 1);

    cout << "-----------------------------" << endl;
    cout << "-----!!!START BATTLE !!!-----" << endl;

    while (pikachu.IsAlive() && bulbizarre.IsAlive()) 
    {
        cout << "Choisi ton attaque : " << endl;
        cout << "0 -- " << endl;
        Eclair.ShortDisplay();
        cout << "1 -- " << endl;
        QueueDeFer.ShortDisplay();
        int attack;
        //Boucle pour savoir si la réponse est bonne, en l'occurence si l'attaque choisi est valide
        do {
            cout << "Choisi ton attaque : " << endl;
            cout << "0 -- " << endl;
            Eclair.ShortDisplay();
            cout << "1 -- " << endl;
            QueueDeFer.ShortDisplay();
            cin >> attack;

        } while (!pikachu.IsAttackValid(attack));

        pikachu.GoAttack(bulbizarre, attack);
        

        if(bulbizarre.IsAlive())
        {
            int x = rand() % 2;
            bulbizarre.GoAttack(pikachu, x);
        }
    }

    /*pikachu.GoAttack(bulbizarre, 0);

    bulbizarre.GoAttack(pikachu, 0);

    pikachu.GoAttack(bulbizarre, 0);*/


}


