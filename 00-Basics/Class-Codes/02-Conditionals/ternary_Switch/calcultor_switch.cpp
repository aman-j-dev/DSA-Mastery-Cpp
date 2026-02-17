#include<iostream>
using namespace std;

int main(){
    double a , b;
    char ch;
    cout << "Enter two numbers and the operation you want to perform (+,-,*,/) : ";
    cin >> a >> b >> ch;

    if(ch != '+' && ch != '-' && ch != '*' && ch != '/'){
        cout << "Wrong operator";
        return 1;
    }

    switch(ch){
        case '+' : 
            cout << "sum is : " << (a+b);
            break;
        case '-' :
            cout << "Difference is : " << (a-b);
            break;
        case '*' :
            cout << "Multiplication is : " << (a*b);
            break;
        case '/' :
            cout << "Division is : " << (a/b);
            break;
    }
    return 0;
}
