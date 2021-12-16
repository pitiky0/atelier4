//
// Created by Ayoub on 10/12/2021.
//

#include <iostream>
using namespace std;

class complexe
{
    double Re;
    double Img;

public:
    complexe(double a = 0, double b = 0)
    {
        if (a != 0 && b != 0)
        {
            /* si a=1 et b=1 on a laiser a l'utilisateur
                de romplire les champs de complexe */
            cout << "\tEntrer la valeur real du nombre : ";
            cin >> a;
            cout << "\tEntrer la valeur imagimer du nombre : ";
            cin >> b;
            Re = a;
            Img = b;
        }
        else
        {
            Re = a;  // initialisation par 0
            Img = b; // initialisation par 0
        }
    }
    void afficher()
    {
        cout << Re;
        // Pour ne pas afficher a + -bi (si Img est negatif)
        if (Img >= 0)
            cout << " + ";
        cout << Img << "i" << endl;
    }
    double module() { return Re * Re + Img * Img; }
    // Opérateur : complexe = complexe
    bool operator=(complexe a) { return a.Re == Re && a.Img == Img; }
    // Opérateur : complexe + complexe
    complexe operator+(complexe a)
    { // z1 + z2
        this->Re += a.Re;
        this->Img += a.Img;
        return *this;
    }
    // Opérateur : complexe - complexe
    complexe operator-(complexe a) // z1 - z2
    {
        this->Re -= a.Re;
        this->Img -= a.Img;
        return *this;
    }
    // Opérateur : complexe * complexe
    complexe operator*(complexe a) // z1 * z2
    {
        this->Re = this->Re * a.Re - this->Img * a.Img;
        this->Img = this->Re * a.Img + this->Img * a.Re;
        return *this;
    }
    // Opérateur : complexe / complexe
    complexe operator/(complexe a) // z1 / z2
    {
        complexe d;
        d.Re = Re * a.Re + Img * a.Img;
        d.Img = Img * a.Re - Re * a.Img;
        d.Re /= a.module();
        d.Img /= a.module();
        return d;
    }
};


int main()
{
    cout << "bienvenue dans notre programme" << endl;
    cout << "Entrer les valeurs de 1er nombre" << endl;
    complexe a(1, 1);
    cout << "Entrer les valeurs de 2eme nombre" << endl;
    complexe b(1, 1);
    system("clear");
    cout << "vos nombres sont : " << endl;
    cout << "\tA = ";
    a.afficher();
    cout << "\tB = ";
    b.afficher();
    cout << endl;
    int rep;
    bool bo;
    cout << "choisisez une operation de cette liste : " << endl;
    cout << endl;
    cout << "\t1. egalite ( a == b ) \n\t2. addition ( a + b ) \n\t3. soustraction ( b - a ) \n\t4. multiplication ( b * a ) \n\t5. division ( b / a ) \n"
         << endl;
    cout << "votre choix est : ";
    cin >> rep;
    cout << "\n"
         << endl;
    switch (rep)
    {
    case 1:
        bo = (a = b);
        if (bo)
        {
            cout << "les deux nombres sont egaux" << endl;
        }
        else
        {
            cout << "les deux nombres ne sont pas egaux" << endl;
        }
        break;
    case 2:
        cout << "voila la reponse : ";
        (a + b).afficher();
        break;
    case 3:
        cout << "voila la reponse : ";
        (b - a).afficher();
        break;
    case 4:
        cout << "voila la reponse : ";
        (a * b).afficher();
        break;
    case 5:
        cout << "voila la reponse : ";
        (b / a).afficher();
        break;
    default:
        cout << "il faut choisir un nombre correct ! (compris entre 1 et 5)" << endl;
    }
    return 0;
}
