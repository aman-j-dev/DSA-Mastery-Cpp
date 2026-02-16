#include<iostream>
using namespace std;

int main(){
    double a , b , c;
    cout << "Enter three numbers : ";
    cin >> a >> b >> c;

    if(a>b){ // a>b
        if(a>c){ // a > b,c
            cout << a << " is biggest.";
        }else{   // c > a > b
            cout << c << " is biggest.";
        }
    }else {   // b > a
        if(b>c){ // b >  a,c
            cout << b << " is biggest.";
        }else{ // c > b > a
            cout << c << " is biggest.";
        }
    }
    return 0;
}