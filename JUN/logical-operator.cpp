/*
8:33 pm
Sunday, 18 June 2023 (IST)
*/

// Logical operator 

#include<iostream>
using namespace std;

int main(){
    int a = 10, b = 20;

    bool result = (a > 0 && a < 100); // you also use and insted of &&

    cout << result << "\n";

    result = (a > 0 || a > b);

    cout << result << "\n";

    result = !result;

    cout << result << "\n";

    return 0;
}