/* 15 jun 2023
20:17:55 */

/*
Escape Sequences

*/

/* After Backslash space is "not a valid sequence"  then how do you print \ in the console  \\ is a valid ScapeSequence*/

#include<iostream>
using namespace std;

int main(){

    cout << " Welcome to my village \" JHUNKA \" \n ";

    cout << " use 2  \\ to print Backslash in the console ";

       //Another example:
    string location = "C:\\xyz\\abc.txt";
    cout << location ;

    return 0;
}