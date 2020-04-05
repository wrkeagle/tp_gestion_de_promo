#ifndef PROMO_H
#define PROMO_H

#include <vector>
#include <string>

#include "student.h"


class promo
{
private:
    /* data */

    std::string name;
    std::vector<student> student_list;
    std::vector<float> grade_list;
    float moyenne_promo;
    std::vector<float> moyenne_list;

public:
    // constructeur
    promo(std::string name);

    // destructeur
    ~promo();

    // autre fonctions
    void addStudent(const student &eleve);

    void addMoyenne(float moyenne);
    void showMoyenne();

};

#endif // PROMO_H
