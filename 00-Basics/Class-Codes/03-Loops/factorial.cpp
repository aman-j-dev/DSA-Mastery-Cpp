#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;

    long int factorial = 1;

    for(int i = 2 ; num >= i ; i++){
        factorial*=i;
    }
    cout << "Factorial of " << num << " is : " << factorial ;
    return 0;
}