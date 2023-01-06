using namespace std;

#include <iostream>
#include <string>

int main()
{
    cout << "Hello yound person ! What is your name ?"<<endl;
    string name;
    cin >> name;
    int money = 50;
    cout << "So hello " << name << " ! Which cheese do you want today ? (Please answer just by yes or no.)" << endl;
    string arrayCheeseName[5]{ "Goat Cheese", "Boursault", "Raclette", "Saint Marcellin", "Comte" };
    int arrayCheesePrice[5]{ 5, 15, 10, 7, 3 };
    cout << "We have " << arrayCheeseName[0] << " for " << arrayCheesePrice[0] << ", " << arrayCheeseName[1] << " for " << arrayCheesePrice[1] << ", " << arrayCheeseName[2] << " for " << arrayCheesePrice[2] << ", " << arrayCheeseName[3] << " for " << arrayCheesePrice[3] << ", " << arrayCheeseName[4] << " for " << arrayCheesePrice[4] << "." << endl;
    cout<< ". Do you want buy " << arrayCheeseName[0] << " ? (You have "<< money<< "$.)" << endl;
    string answerGoatCheese;
    cin >> answerGoatCheese;
    if (answerGoatCheese == "yes" && money >> arrayCheesePrice[0])
    {
        money = money - arrayCheesePrice[0];
        cout << "Ok, i give you back " << money << "$. And I'll wrap this for you." << endl;
        cout<<"So, do you want buy " << arrayCheeseName[1] << ", for " << arrayCheesePrice[1]<< " ? (You have " << money << "$.)" << endl;
    }
    else if(answerGoatCheese == "no")
    {
        cout << "Okok, so, do you want buy " << arrayCheeseName[1] << ", for " << arrayCheesePrice[1] << " ? (You have " << money << "$.)" << endl;
    }
    string answerBoursault;
    cin >> answerBoursault;
    if (answerBoursault == "yes" && money >> arrayCheesePrice[1])
    {
        money = money - arrayCheesePrice[1];
        cout << "Ok, i give you back " << money << " $. And I'll wrap this for you." << endl;
        cout << "So, do you want buy " << arrayCheeseName[2] << ", for " << arrayCheesePrice[2] << " ? (You have " << money << "$.)" << endl;
    }
    else if (answerBoursault == "no")
    {
        cout << "Okok, so, do you want buy " << arrayCheeseName[2] << ", for " << arrayCheesePrice[2] << " ? (You have " << money << "$.)" << endl;
    }
    string answerRaclette;
    cin >> answerRaclette;
    if (answerBoursault == "yes" && money >> arrayCheesePrice[2])
    {
        money = money - arrayCheesePrice[2];
        cout << "Ok, i give you back " << money << " $. And I'll wrap this for you." << endl;
        cout << "So, do you want buy " << arrayCheeseName[3] << ", for " << arrayCheesePrice[3] << " ? (You have " << money << "$.)" << endl;
    }
    else if (answerBoursault == "no")
    {
        cout << "Okok, so, do you want buy " << arrayCheeseName[3] << ", for " << arrayCheesePrice[3] << " ? (You have " << money << "$.)" << endl;
    }
    string answerSaintMarcellin;
    cin >> answerSaintMarcellin;
    if (answerBoursault == "yes" && money >> arrayCheesePrice[3])
    {
        money = money - arrayCheesePrice[3];
        cout << "Ok, i give you back " << money << " $. And I'll wrap this for you." << endl;
        cout << "So, do you want buy " << arrayCheeseName[4] << ", for " << arrayCheesePrice[4] << " ? (You have " << money << "$.)" << endl;
    }
    else if (answerBoursault == "no")
    {
        cout << "Okok, so, do you want buy " << arrayCheeseName[4] << ", for " << arrayCheesePrice[4] << " ? (You have " << money << "$.)" << endl;
    }
    string answerComte;
    cin >> answerComte;
    if (answerBoursault == "yes" && money >> arrayCheesePrice[4])
    {
        money = money - arrayCheesePrice[4];
        cout << "Ok, i give you back " << money << " $. And I'll wrap this for you." << endl;
        cout << "So, I don't have other cheese ! GoodBye My friend "<< name<<" !"<< endl;
    }
    else if (answerBoursault == "no")
    {
        cout << "So, I don't have other cheese ! GoodBye My friend " << name << " !" << endl;
    }

}

