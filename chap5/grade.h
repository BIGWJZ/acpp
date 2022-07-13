#ifndef GRADE_H
#define GRADE_H

#include <vector>
#include "Student.h"

double grade(double midterm, double final, double homework);
double grade(double midterm, double final, const std::vector<double>& homework);
double grade(const Student_info&);
bool fgrade(const Student_info&);

#endif