/*5:44 pm
Friday, 30 June 2023 (IST)
*/

#include<iostream>
using namespace std;

int main(){
    
    int n;

    cout << "Enter a number" << '\n';

    cin >> n;
 
    for(int i = 1; i <= 10; i++){
  
        cout << n << " * " << i << " = " << (n * i) << '\n';
   
    }

    return 0;
}