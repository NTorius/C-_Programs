#include <iostream>

using namespace std;

int main(){
   cout << "Enter the number to check is prime or not";
    int a;
    cin >> a;
    bool b = true;
    for(int i =1; i<a; i++){
        if(a % i == 0){
            b=false;
        }
    }
    if(b== false){
        cout << "Enter the number is prime number";
        return 0;
    }
    cout << "Enter the number is not prime number";
    return 0;
}