#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "Student.h"
#include "grade.h"

using namespace std;

int main(){
    vector<Student_info> students;
    Student_info record;
    string:size_t maxlen = 0;

    while(read(cin, record)){
        maxlen = max(record.name.size(), maxlen);
        students.push_back(record);
    }
    cin.clear();
    sort(students.begin(), students.end(), compare);

    for(vector<Student_info>::size_type i=0; i!=students.size(); ++i){
        cout << students[i].name << string(maxlen + 1 - students[i].name.size(), ' ');
        try{
            double final_grade = grade(students[i]);
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade << setprecision(prec);
        } catch (domain_error e){
            cout << e.what();
        }
        cout << endl;
    }
    return 0;
}