#include "median.h"

using namespace std;

double median(vector<double> vec){
    size_t sz = vec.size();
    if(!sz) 
        throw domain_error("median of an empty vector");
    sort(vec.begin(),vec.end());
    size_t mid = sz/2;
    return sz%2==0 ? (vec[mid]+vec[mid-1])/2 : vec[mid];
}