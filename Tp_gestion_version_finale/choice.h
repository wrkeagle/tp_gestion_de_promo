#ifndef CHOICE_H
#define CHOICE_H
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#include "student.h"
#include "promo.h"

void choice1()
{
    int choix;
    cout << "Choisissez la promo B1 ou B2 ";
    cout << "\nSaisissez 1 ou 2 : ";
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


    b1.addStudent(eleve1);
    b1.addStudent(eleve2);

    b1.addMoyenne(eleve1.getMoyenne());
    b1.addMoyenne(eleve2.getMoyenne());

    b1.showMoyenne();
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


       b2.addStudent(eleve1);
       b2.addStudent(eleve2);

       b2.addMoyenne(eleve1.getMoyenne());
       b2.addMoyenne(eleve2.getMoyenne());

       b2.showMoyenne();
        }

}
void choice2(){
    int tapez;
    cout << "En fait j'ai la flemme de le faire pour l'instant, je le ferais plus tard... " << endl;
    cout << "Tapez 1 pour basculer sur le premier mode : ";
    cin >> tapez;

    if(tapez == 1){
        choice1();
    }
}

void mode()
{
   int choisir;
   cout << "Mode 1 pour ajouter vos propres eleves.\nMode 2 pour les eleves deja enregistres." << endl;
   cout << "Selectionnez le mode :" ;
   cin >> choisir;

  if(choisir == 1){
      choice1();
  }
  if(choisir == 2){
      choice2();
  }
}





#endif // CHOICE_H
