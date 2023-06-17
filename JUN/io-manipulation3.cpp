/* 
Saturday, 17 June 2023 (IST)
*/


/*
Io manipulation  for formatting manipulation of output
*/


#include<iostream>
using namespace std;

int main(){
    int a = 12;

    cout << std::setw(5);

    cout << std::setfill('*'); // if setfill is not setfill( )then it will be space // it can be set once time

    cout << a << "\n";

    cout << std::setw(5); // setw() has to be used every time to set the width

    cout << " Hi " << "\n";

    cout << std::left; //it makie sence when setw() is used // std::right // it can be set once time

    cout << std::setw(5); // setw() has to be used every time to set the width

    cout << a << "\n";

    return 0;
}
