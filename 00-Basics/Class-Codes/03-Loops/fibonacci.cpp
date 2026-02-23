#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int n = 2 , np = 1 , npp = 1 ;

    cout << "Fibonacci series : " << endl << "1 1 2 ";

    for(int i = 4 ; i <= num ; i++){
        npp = np;
        np = n;
        n = np + npp;

        cout << n << " ";

    }
    return 0;
}