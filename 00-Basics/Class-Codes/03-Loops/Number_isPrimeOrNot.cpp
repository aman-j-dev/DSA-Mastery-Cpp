#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number you want to check if its prime or not : ";
    cin >> num;
    bool isPrime = true;
    for(int i=2 ; i < num ; i++ ){
        if(num%i == 0){
            isPrime = 0; 
        }
    }

    if(isPrime == true){
        cout << num << " is a prime number.";
    }else{
        cout << num << " is not a prime number";
    }

    return 0;
}
