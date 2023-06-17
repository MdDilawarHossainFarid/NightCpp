/* 8:16 pm
Saturday, 17 June 2023 (IST)
*/


/*
Io manipulation  for integer value
How do modify default behavior print for boolen value, float etc
*/

#include<iostream>
using namespace std;

int main(){
    int a = 26;

    cout << std::showbase; //noshowbase

    cout << std::oct;

    cout << a << "\n";

    cout << std::hex;

    cout << std::showpos; //noshowpos

    cout << a << "\n";

    cout << std::uppercase; //nouppercase

    cout << a << "\n";

    cout << std::nouppercase;
    
    cout << a << "\n";




    return 0;
}
