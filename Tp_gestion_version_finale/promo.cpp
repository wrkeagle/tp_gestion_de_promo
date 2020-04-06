#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

#include "promo.h"
#include "student.h"

promo::promo(string name)
{
}

promo::~promo()
{
}

void promo::addStudent(const student &eleve)
{
    student_list.push_back(eleve);
}

void promo::addMoyenne(float moyenne)
{
    //cout << moyenne << endl;
    cout << "Calcul de la moyenne de la promo..." << endl;

    moyenne_list.push_back(moyenne);

}

void promo::showMoyenne()
{
    moyenne_promo = 0;

    for(int i = 0; i<moyenne_list.size(); ++i)
    {
        moyenne_promo = moyenne_promo + moyenne_list[i];
    }

    moyenne_promo = moyenne_promo / moyenne_list.size();

    cout << "La moyenne de la promotion est de : " << setprecision(3) << moyenne_promo << "/20." << endl;
}
