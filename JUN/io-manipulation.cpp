/*
15 JUN 2023
20:37:15
*/

/*
Io manipulation  for boolen value
How do modify default behavior print for boolen value, float etc
*/

#include<iostream>
using namespace std;

int main(){

    bool a = true;

    cout << a << '\n';  // print 1

    cout << std::boolalpha; // if this is set then entire boolen value print bydefault true

    cout << a << '\n'; // print true 

    cout << std::noboolalpha; // to reset

    cout << a;
    
    return 0;
}