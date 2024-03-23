#include<iostream>
using namespace std;

void pattern1(int a){
    for(int i = 0; i <= a; i++){
        for(int j = 0; j <= a; j++){
            cout << " * ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
pattern1(n);
}