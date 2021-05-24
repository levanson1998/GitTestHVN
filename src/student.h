/*
 * student.h
 *
 *  Created on: May 7, 2021
 *      Author: sonvl.vn
 */


#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <vector>
#include <algorithm>

enum class EGender
    {
        MALE,
        FEMALE
    };

struct SStudent{
    std::string name{};
    int age{};
    EGender gender{};
    std::string class_student{};
    float score{};
    bool result{};
};

typedef std::vector<SStudent> StudentVt;

bool Greater(const struct SStudent& a, const struct SStudent& b);
void SortName(StudentVt& inf_student);
void ResultOfScore(StudentVt& inf_student);
bool CompareResult(const struct SStudent& a);
int CountPassed(const StudentVt& inf_student);
void PrintStudent(const StudentVt& inf_student);



#endif /* STUDENT_H_ */
