#include "Student.h"

using namespace std;

bool compare(const Student_info& a, const Student_info& b){
    return a.name < b.name;
} 

istream& read(std::istream& is, Student_info& stu){
    is >> stu.name >> stu.midterm >> stu.final;
    read_hw(is, stu.homework);
    return is;
}

istream& read_hw(std::istream& is, std::vector<double>& homework){
    if(is){
        homework.clear();
        double x;
        while(is >> x)
            homework.push_back(x);
        is.clear();
    }
    return is;
}

