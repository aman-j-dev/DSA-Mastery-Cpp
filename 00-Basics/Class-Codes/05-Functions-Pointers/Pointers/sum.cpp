#include<iostream>
using namespace std;

int main(){
    int x;
    int* p1 = &x;

    int y;
    int* p2 = &y;

    cout << "Enter two numers : ";
    cin >> *p1 >> *p2;

    int sum;
    int* p3 = &sum;

    *p3 = *p2 + *p1;

    cout << "sum : " << *p3 << endl;
}