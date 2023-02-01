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

    //Pokemon
    Pokemon pikachu = Pokemon("Pikachu", "Petit, jaune et electrique.", Elements::Electric, 25);
    Pokemon bulbizarre("Bulbizarre", "Gros, vert et feuillut.", Elements::Grass, 25); //Better version parce que evite de creer un double

    //Capacite
    Abilities Eclair("Attaque Eclair", "Lance un eclair sur l'ennemi.", Elements::Electric, 10, 2);
    Abilities QueueDeFer("Queue de Fer", "Attaque violement l'ennemi avec sa queue.", Elements::Steel, 7, 15);
    Abilities LanceFeuille("LanceFeuille", "Lance des feuilles tranchantes.", Elements::Grass, 12, 10);
    Abilities CanonGrain("Canon Graine", "Mitraille son adversaire avec des graines.", Elements::Grass, 5, 15);

    cout << "Salut jeune aventurier, voici ton pokemon, " << endl;
    pikachu.Display();
    cout << "Et voici ton adversaire, " << endl;
    bulbizarre.Display();

    pikachu.Learn(Eclair, 0);
    pikachu.Learn(QueueDeFer, 1);
    bulbizarre.Learn(LanceFeuille, 0);
    bulbizarre.Learn(CanonGrain, 1);

    cout << "-----------------------------" << endl;
    cout << "-----!!!START BATTLE!!!------" << endl;

    while (pikachu.IsAlive() && bulbizarre.IsAlive()) 
    {
        int attack;
        //Boucle pour savoir si la réponse est bonne, en l'occurence si l'attaque choisi est valide
        do {
            cout << "Choisi ton attaque : " << endl;
            /*Eclair.ShortDisplay();
            QueueDeFer.ShortDisplay();*/
            pikachu.ShowAbilities();
            cin >> attack;

        } while (!pikachu.IsAttackValid(attack));

        pikachu.GoAttack(bulbizarre, attack);
        

        if(bulbizarre.IsAlive())
        {
            int x = rand() % 2 + 1;
            bulbizarre.GoAttack(pikachu, x);
        }
    }
}


