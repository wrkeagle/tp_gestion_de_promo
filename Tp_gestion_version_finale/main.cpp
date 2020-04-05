#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#include "student.h"
#include "promo.h"
#include "presentation.h"


int main()
{
    startup();
    int choix;
    cout << "Choisissez une classe b1(1) ou b2(2) : ";
    cin >> choix;


   if(choix == 1){

    promo b1 ("Premiere annee");

    student eleve1;
    student eleve2;
    student eleve3;


    eleve1.giveName();
    eleve1.showName();
    eleve1.addGrade();
    eleve1.addGrade();
    eleve1.calcMoyenne();

    eleve2.giveName();
    eleve2.showName();
    eleve2.addGrade();
    eleve2.addGrade();
    eleve2.calcMoyenne();

    eleve3.giveName();
    eleve3.showName();
    eleve3.addGrade();
    eleve3.addGrade();
    eleve3.calcMoyenne();

    cout << "\n\n\n" << endl;

    b1.addStudent(eleve1);
    b1.addStudent(eleve2);

    b1.addMoyenne(eleve1.getMoyenne());
    b1.addMoyenne(eleve2.getMoyenne());

    b1.showMoyenne();
    end();

    return (0);
   }
   if(choix == 2){
       promo b2 ("Deuxieme annee");

       student eleve1;
       student eleve2;
       student eleve3;


       eleve1.giveName();
       eleve1.showName();
       eleve1.addGrade();
       eleve1.addGrade();
       eleve1.calcMoyenne();

       eleve2.giveName();
       eleve2.showName();
       eleve2.addGrade();
       eleve2.addGrade();
       eleve2.calcMoyenne();

       eleve3.giveName();
       eleve3.showName();
       eleve3.addGrade();
       eleve3.addGrade();
       eleve3.calcMoyenne();

       cout << "\n\n\n\n" << endl;

       b2.addStudent(eleve1);
       b2.addStudent(eleve2);

       b2.addMoyenne(eleve1.getMoyenne());
       b2.addMoyenne(eleve2.getMoyenne());

       b2.showMoyenne();
       end();


       return (0);

   }
   else {
       cout << "Veuillez choisir 1 ou 2 s'il vous plait." << endl;
       main();

       return(0);
   }
}
