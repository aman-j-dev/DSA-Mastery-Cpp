#include<iostream>
using namespace std;

int gcd(int , int);

int main(){
    int a ,b;
    cout << "Enter two numbers : ";
    cin >> a >> b;

    cout << "Greatest common divisor is : " << gcd(a,b) << endl;
}

int gcd(int a , int b){
    int GCD=1;
    for(int i = min(a,b) ; i>1 ; i-- ){
        if((a%i == 0)&&(b%i == 0)){
            GCD = i;
            break;
        }
    }
    return GCD;
}