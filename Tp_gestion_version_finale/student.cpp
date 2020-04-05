#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

#include "student.h"
#include "promo.h"

// Constructeur

student::student()
{
}

// Destructeur

student::~student()
{
}

// Autre fonctions

void student::giveName()
{

    cout << "Saisissez le prenom : " << endl;
    cin >> fname;
    cout << endl;

    cout << "Saisissez le nom : " << endl;
    cin >> lname;
    cout << endl;
}

void student::showName()
{
    cout << "Le prenom saisi : " << fname << endl;
    cout << "Le nom saisi : " << lname << endl;
}


int student::addGrade()
{
    float grade;

    cout << "Veuillez entrer la note de l'eleve " << lname << " " << fname << " :" << endl;
    cin >> grade;

    if (grade > 20)
    {
        cout << "Impossible, la note que vous tentez d'entrer est superieure a 20.\n Entrez une note comprise entre 0 et 20 inclus." << endl;

        addGrade();

        return (0);
    }
    if(grade < 0)
    {
        cout << "Impossible, la note que vous tentez d'entrer est inferieure a 0.\n Entrez une note comprise entre 0 et 20 inclus." << endl;

        addGrade();

        return (0);
    }
        grade_list.push_back(grade);

        return (0);
}

void student::calcMoyenne()
{
   moyenne = 0;

   for(int i = 0; i<grade_list.size(); ++i)
   {
       moyenne = grade_list[i] + moyenne;
       cout << "La note " << i+1 << " est de " << grade_list[i] << "/20." << endl;
   }
        moyenne = moyenne / grade_list.size();

        cout << "La moyenne de l'eleve est de " << moyenne << "/20." << endl;

}


float student::getMoyenne()
{
    return(moyenne);
}
































