//
// Created by Ayoub on 16/12/2021.
//

#include <iostream>
#include <list>
#include <string>
#include <iterator>
using namespace std;
class Repas;
class Element;
class Chat;
class Animal;
class Chien;
class Entraineur;
class Compitition;
class Repas
{
private:
    string nom, description;
    int heure;
    list<Chat> listChat;
    list<Element> *listElement;

public:
    Repas()
    {
        listElement = new list<Element>();
    }
    ~Repas()
    {
        delete this->listElement;
    }
};
class Element
{
private:
    string nom, type;
    Repas r;
};
class Animal
{
protected:
    string nom, genre;
    int age;
};
class Chat : public Animal
{
private:
    string type;
    list<Repas> listRepas;

public:
    void sauter();
};
class Entraineur
{
private:
    string nom, description;
    list<Chien> listChien;
};
class Compitition
{
private:
    string date, nom;
    Entraineur e;

public:
    int ordre;
};
class Race
{
protected:
    string specificite;
    void israceHybride();
};
class Chien : public Animal, public Race
{
private:
    string taille;
    list<Entraineur> listEntraineur;

public:
    void ischass3();
};
int main()
{
    return 0;
}