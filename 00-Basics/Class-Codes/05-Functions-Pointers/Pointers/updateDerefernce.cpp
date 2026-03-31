#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int* y = &x;
    cout << ++(*y) <<endl;
    cout << x << endl;
    *y += 4;
    cout << x << endl;
    *y = 20;
    cout << x << endl;
}