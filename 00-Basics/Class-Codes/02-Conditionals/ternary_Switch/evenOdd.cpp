#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a Number : ";
    cin >> num;

    (num%2==0) ? cout << "Even." : cout << "Odd.";
    
    return 0;
}

// Condition ? True : False