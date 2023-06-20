/*
Saturday, 17 June 2023 (IST)
*/

/*
Io manipulation  for "Floating point Default print Format"
How do modify default behavior print for boolen value, float etc
*/

#include<iostream>
#include <iomanip> 
using namespace std;

int main(){
    double x = 1.2300;

    cout << x << "\n"; // defaul "no trailing zero" // 1.23

    double y = 1567.56732;

    cout << y << "\n";

    double z = 1244567.45;

    cout << z << "\n";

    double a = 124456.67;

    cout << a << "\n";

    double b = 123e+2;

    cout << b << "\n";
   

    return 0;
}