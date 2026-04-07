// memmory allocated to array is contiguous;
// address of first byte is always shown

#include<iostream>
using namespace std;

int main(){
    int arr[10];

    cout << &arr << endl;
    cout << &arr[0] << endl; //this
    cout << &arr[1] << endl; //and this is same
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;
    cout << &arr[5] << endl;
    cout << &arr[6] << endl;
    cout << &arr[7] << endl;
    cout << &arr[8] << endl;
    cout << &arr[9] << endl;
}