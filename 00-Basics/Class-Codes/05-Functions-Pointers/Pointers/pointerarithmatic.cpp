// address is in hexadecimal
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
// 1 2 3 4 5 6 7 8 9 A  B  C  D  E  F

#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int *p1 = &a;
    
    cout << *p1 << endl;
    cout << p1 << endl <<endl;
    
    (*p1)++;

    cout << *p1 << endl;
    cout << p1 << endl << endl;
    
    p1++;              // add 1 in the address         can use in accessing the elements of array
    
    cout << *p1 << endl;  // print garbage value
    cout << p1 << endl << endl;



    // there will be difference of 4 byte in address as integer take 4 byte space


}