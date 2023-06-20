/*
Sunday, 18 June 2023 (IST)
*/

// Short circuiting in logical operator

#include<iostream>
using namespace std;

int main(){
    int x = 5;

    bool result = (x > 0) && (x++);

    //bool result = (x > 10) && (x++); result = 0 and x = 5 x part is not evaluated 
    // bool input provide in logical operator but here integer value is provided in c++ inplace of boolen we can use it

    // bool result = (x == 5) || (x++);

    // bool result = (x == 4) || (x++);

    cout << result << "\n";

    cout << x << "\n";

    return 0;
}