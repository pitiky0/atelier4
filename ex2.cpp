//
// Created by Ayoub on 12/12/2021.
//

#include <iostream>
#include <string>
using namespace std;

void StringtrToDate(string s)
{
    if (s.length() != 12)
        cerr << "Chaine invalide." << endl;
    else
    {
        int jour, Int_mois, ans, heure, min;
        string mois;
        // stoi ===> string to intiger
        jour = stoi(s.substr(0, 2));
        Int_mois = stoi(s.substr(2, 2));
        ans = stoi(s.substr(4, 4));
        heure = stoi(s.substr(8, 2));
        min = stoi(s.substr(10, 2));

        if (jour <= 30 && Int_mois <= 12 && ans <= 2022 && heure < 24 && min < 60)
        {
            switch (Int_mois)
            {
            case 1:
                mois = "Janvier";
                break;
            case 2:
                mois = "février";
                break;
            case 3:
                mois = "mars";
                break;
            case 4:
                mois = "avril";
                break;
            case 5:
                mois = "mai";
                break;
            case 6:
                mois = "juin";
                break;
            case 7:
                mois = "juillet";
                break;
            case 8:
                mois = "août";
                break;
            case 9:
                mois = "septembre";
                break;
            case 10:
                mois = "octobre";
                break;
            case 11:
                mois = "novembre";
                break;
            case 12:
                mois = "décembre";
                break;
            default:
                break;
            }
            cout << endl;
            cout << jour << " " << mois << " " << ans << " " << heure << "h" << min << std::endl;
        }
        else
            cerr << "il semble que la date est incorrect !" << endl;
    }
}
int main()
{
    string s;
    cout << "enter la valeur de date (12 character): ";
    cin >> s;
    StringtrToDate(s);
    return 0;
}
