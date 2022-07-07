#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    cout << "Please enter your name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "! " << endl;

    cout << "Please enter your midterm and final exam grades: " ;
    double midterm, final;
    cin >> midterm >> final;
    cout << "Enter all your homework grades, followed y end-of-file: " << endl;
    double x;
    vector<double> homework;
    while(cin >> x){
        homework.push_back(x);
    }
    size_t size = homework.size();
    if(size==0){
        cout << endl << "You must enter your grades, try again!" << endl;
        return 1;
    }
    sort(homework.begin(),homework.end());
    double median;
    median = size%2 == 0 ? (homework[size/2-1]+homework[size/2])/2 : homework[size/2];
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
         << 0.2 * midterm + 0.4 * final + 0.4 * median
         << setprecision(prec) << endl;
    return 0;
}