#include<iostream>
using namespace std;

int main(){
    double a , b , c ;
    cout << "Enter three Numbers : ";
    cin >> a >> b >> c;

    if((a<(b+c))&&(b<(a+c))&&(c<(a+b))){
        cout << a << " , " << b << " , " << c << " are valid sides of triangle";
    }else{
        cout << a << " , " << b << " , " << c << " are not a valid sides of triangle";
    }
    return 0;
}