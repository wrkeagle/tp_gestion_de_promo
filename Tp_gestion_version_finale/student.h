#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>



class student
{
private:
    /* data */

    std::string fname;
    std::string lname;

    std::vector<float> grade_list;
    float moyenne;

public:

    // constructeur

    student();

    // destructeur

    ~student();

    // autre fonctions

    void giveName();
    void showName();

    int addGrade();
    void calcMoyenne();

    float getMoyenne();

};

#endif // STUDENT_H
