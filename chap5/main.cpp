#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include "Student.h"
#include "grade.h"

using namespace std;

list<Student_info> extract_fails(list<Student_info>& students){
    list<Student_info> fail;
    list<Student_info>::iterator it = students.begin();

    while(it!=students.end()){
        if(fgrade(*it)){
            fail.push_back(*it);
            it = students.erase(it);
        }
        else ++it;
    }

    return fail;
}

void showStudents(const list<Student_info>& students, int  MaxNameLen){
    for(Student_info stu:students){
        cout << stu.name << string(MaxNameLen + 1 - stu.name.size(), ' ');
        try{
            double final_grade = grade(stu);
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade << setprecision(prec);
        } catch (domain_error e){
            cout << e.what();
        }
        cout << endl;
    }
}

int main(){
    list<Student_info> students;
    Student_info record;
    string:size_t maxlen = 0;

    while(read(cin, record)){
        maxlen = max(record.name.size(), maxlen);
        students.push_back(record);
    }
    cin.clear();
    students.sort(compare);
    // sort(students.begin(), students.end(), compare);

    list<Student_info> fails = extract_fails(students);

    cout << "Pass Student List: " << endl;
    showStudents(students, maxlen);
    cout << endl;
    cout << "Failed Student List: " << endl;
    showStudents(fails, maxlen);
    return 0;
}