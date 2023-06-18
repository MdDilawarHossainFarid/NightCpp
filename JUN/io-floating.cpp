/*
9:04 am
Sunday, 18 June 2023 (IST)
*/

/*
Floating point manipulation default format
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    cout << std::setprecision(4);

    double a = 15.5683, b = 34267.1;

    cout << a << "  " << b << "\n"; 

    double c = 1.23;
    
    cout << std::showpoint << c << "\n";

    cout << std::showpos <<  c << "\n";

    cout << std::uppercase << b << "\n"; 
    
    
    return 0;


}