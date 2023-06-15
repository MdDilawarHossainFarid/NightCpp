#include<iostream>
using namespace std;

// Global variable in diffarent data type
int a = 10;
float b = 4.5;
char d = 'A';
bool e;

// if do not initilizaion then by default 0

int x;
float y;
char z;

// we can change global variable in block scope

int block_scope_change_value = 99;

int main(){

    cout << "GolbalVariable" << endl;

    cout << a << " " << b << " " <<  d << " " << e << endl;

    cout << x << " " << y << " " <<  z <<  endl;

    {

    block_scope_change_value = 100;
    cout <<   block_scope_change_value;

    }

    return 0;
}