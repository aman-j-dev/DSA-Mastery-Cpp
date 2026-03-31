#include <iostream>
using namespace std;

int main() {
    char X = 'P';
    char* Y = &X;

    cout << "Value of X : " << X << endl;
    cout << "Address of X : " << &X << endl;
    cout << "Address of X : " << Y << endl;
    cout << "Address of X : " << static_cast<void*>(&X) << endl;
    cout << "Address of X (via Y) : " << static_cast<void*>(Y) << endl;
}