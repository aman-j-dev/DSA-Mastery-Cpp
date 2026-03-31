// DEREFERENCE OPERATOR
#include<iostream>
using namespace std;

int main(){
    int x =1;
    int* a = &x;
    int* b = a;
    int* c = b;
    int** d = &b;

    cout << "Value of X : " << x << endl;
    cout << "Address of X : " << &x << endl;
    
    cout << endl;
    
    cout << "Value of X(via a) : " << *a << endl;
    cout << "Address of X(via a) : " << a << endl;
    
    cout << endl;
    
    cout << "Value of X(via b) : " << *b << endl;
    cout << "Address of X(via b) : " << b << endl;
    
    cout << endl;

    cout << "Value of X(via c) : " << *c << endl;
    cout << "Address of X(via c) : " << c << endl;

    cout << endl;

    cout << "value of X(via d) : " << **d <<endl;
    cout << "Address of X(via d using dereference operator) : " << *d <<endl;
    cout << "Address of b(via d) : " << d << endl;

    
}