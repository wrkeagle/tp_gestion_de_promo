#ifndef PRESENTATION_H
#define PRESENTATION_H

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;


void startup()
{
    cout << left << "______________________" << endl;
    cout << "|" << "                    |" << endl;
    cout << "|" << "                    |" << endl;
    cout << "|   " << setw(3) << "Bienvenue dans" << "   |" << endl;
    cout << "|   " << setw(3) << "le gestionnaire" <<"  |" << endl;
    cout << "|   " << setw(3) << "de promotions" << "    |" << endl;
    cout << "|" << "        v3.0        " << setw(10) << "|" << endl;
    cout << "|" << "                    |" << endl;
    cout << "|" <<  "____________________|\n" << endl;

}

void end()
{
    cout << left << "______________________" << endl;
    cout << "|" << "                    |" << endl;
    cout << "|" << "                    |" << endl;
    cout << "|   " << setw(3) << "Merci d'avoir " << "   |" << endl;
    cout << "|   " << setw(3) << "  utilise mon  " <<"  |" << endl;
    cout << "|   " << setw(3) << " gestionnaire !" << "  |" << endl;
    cout << "|" << "     by loick       " << setw(10) << "|" << endl;
    cout << "|" << "                    |" << endl;
    cout << "|" <<  "____________________|\n" << endl;
}

#endif // PRESENTATION_H
