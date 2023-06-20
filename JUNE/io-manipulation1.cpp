/*
7:52 pm
Saturday, 17 June 2023 (IST)
*/

/*
Io manipulation  for integer value
How do modify default behavior print for boolen value, float etc
*/

#include<iostream>
using namespace std;

int main(){

int a = 26, b = 20;

cout << a << " " << b << '\n';

cout << std::hex;

cout << a << " " << b << '\n';

cout << std::oct;

cout << a << " " << b << '\n';

cout << std::dec;

cout << a << " " << b << '\n';


return 0;
}