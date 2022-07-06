#include <iostream>

using namespace std;

int main(){
    cout << "Please enter the side length of your square:  ";
    int len, i, j;
    cin >> len;
    cout << endl;
    for(i=0; i<len;i++){
        for(j=0;j<len*2;j++)
            cout << "*";
        cout << endl;
    }
}