#include<iostream>
using namespace std;

int main(){
    int x = 5;
    int* z = &x;
    double y = 9;
    char A = 'Z';
    char* b = &A;
    cout << "Address of X is : " << &x << endl;
    cout << "Address of Y is : " << &y << endl;
    cout << "Address of X is : " << z << endl;
    cout << "value of X is : " << *z << endl;
    cout << "Address of A is : " << &A << endl;
    cout << "value of  is : " << b << endl;

    
}
