// Student.h
#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student {
private:
    std::string name;
    int studentNumber;
    double average;

public:
    std::string getName() const;
    void setName(const std::string &value);

    int getStudentNumber() const;
    void setStudentNumber(int value);

    double getAverage() const;
    void setAverage(double value);
};
#endif
