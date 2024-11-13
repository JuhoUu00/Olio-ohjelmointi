// Student.cpp
#include "Student.h"

std::string Student::getName() const { return name; }
void Student::setName(const std::string &value) { name = value; }

int Student::getStudentNumber() const { return studentNumber; }
void Student::setStudentNumber(int value) { studentNumber = value; }

double Student::getAverage() const { return average; }
void Student::setAverage(double value) { average = value; }
