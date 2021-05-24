/*
 * student.cpp
 *
 *  Created on: May 7, 2021
 *      Author: sonvl.vn
 */


#include "student.h"

constexpr float SCORE_PASSED{5.0};

/*
 sort by name
 */
bool Greater(const struct SStudent& a, const struct SStudent& b)
{
        return (a.name < b.name);
}

void SortName(StudentVt& inf_student)
{
    std::sort(inf_student.begin(), inf_student.end(), Greater);
}

/*
 result of score
 */
void ResultOfScore(StudentVt& inf_student)
{
    for (auto& student : inf_student)
    {
        if (student.score >= SCORE_PASSED)
            student.result = true;
        else
            student.result = false;
    }
}

bool CompareResult(const struct SStudent& a)
{
    return a.result;
}

/*
 count students have pass result
 */
int CountPassed(const StudentVt& inf_student)
{
    return static_cast<int>(std::count_if(inf_student.begin(), inf_student.end(), CompareResult));
}

void PrintStudent(const StudentVt& inf_student)
{
    std::string gender{};
    std::string result{};
    for (const auto& student : inf_student)
    {
        if(student.gender == EGender::MALE)
        {
            gender = std::string{"male"};
        }
        else if(student.gender == EGender::FEMALE)
        {
            gender = std::string{"female"};
        }
        else
        {
            gender = std::string{"unknown"};
        }

        if(student.result == true){
            result = std::string{"passed"};
        }
        else{
            result = std::string{"failed"};
        }

        std::cout << "name: " << student.name << ", age: " << student.age
                << ", gender: " << gender << ", class: " << student.class_student
                << ", score: " << student.score << ", result: " << result << "\n";
    }
}

