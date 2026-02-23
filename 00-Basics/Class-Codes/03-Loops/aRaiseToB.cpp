#include<iostream>
using namespace std;

int main(){
    double base , power;
    cout << "Enter base , power (a raise to power b) respectively : ";
    cin >> base >> power;

    long double result = 1;

    // if(power < 0){
    //     for(int i = -1 ; i >= power ; i--){
    //         result /= base;
    //     }
    // }else{
    //     for(int i = 1 ; i <= power ; i++){
    //         result*=base;
    //     }
    // }




    bool isPowerNegative  = 0;

    if(power < 0){
        power = -power;
        isPowerNegative = 1;
    }
    for(int i = 1 ; i <= power ; i++){
        result *= base;
    }
    if(isPowerNegative == 1){
        result = 1 / result;
    }

    cout << "Result is : " << result << endl;

    return 0;
    
}