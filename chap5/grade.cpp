#include "grade.h"
#include "median.h"

using namespace std;

double grade(double midterm, double final, double homework){
    return 0.2*midterm + 0.4*final + 0.4*homework;
}

double grade(double midterm, double final, const vector<double>& hw){
    if(!hw.size())
        throw domain_error("Student has done no homework!");
    return grade(midterm, final, median(hw));
}

double grade(const Student_info& stu){
    return grade(stu.midterm, stu.final, stu.homework);
}

bool fgrade(const Student_info& s){
    return grade(s) < 60;
}