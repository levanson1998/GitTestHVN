/*
 * main.cpp
 *
 *    Created on: May 6, 2021
 *            Author: sonvl.vn
 */

// branch Son1
// branch Son1 edit 1
// edit in diff folder
// edit in Son1 folder

// new edit 

#include "student.h"
#include "main.h"


int main()
{
    StudentVt inf_students
    {
       {{"c", 14, EGender::MALE, "1a", 9.0 },
        {"cbb", 14, EGender::MALE, "1a", 4.0 },
        { "cba", 14, EGender::FEMALE, "1a", 5.5 },
        { "asv", 14, EGender::FEMALE, "1a", 4.0 },
        { "esv", 14, EGender::FEMALE, "1a", 8.6 }}
    };

    std::cout << "\nbefore sort: \n";
    PrintStudent(inf_students);

    SortName(inf_students);

    std::cout << "\nafter sort: \n";
    PrintStudent(inf_students);

    std::cout << "\nThis is result of student: \n";
    ResultOfScore(inf_students);
    PrintStudent(inf_students);

    std::cout << "\nHave " << CountPassed(inf_students) << " students passed\n";

    return 0;
}

