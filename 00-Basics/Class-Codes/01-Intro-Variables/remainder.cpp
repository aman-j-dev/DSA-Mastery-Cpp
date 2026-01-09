#include<iostream>
using namespace std;

int main(){
    
    int div = 9 , divisor = 2;
    // int quo = div/divisor;

    // int rem = -(quo*divisor) + div ;

    // cout << "Remainder is : " << rem ;


    //  OR
    
    int rem = div % divisor;        // Modulus operator
    cout << "Remainder is : " << rem ;

    return 0;
}