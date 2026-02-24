// Solid rectangle

// * * * * *
// * * * * *
// * * * * *

// R=3 , C = 5;



#include<iostream>
using namespace std;

int main(){
    int R , C ;
    cout << "Enter Rows and Column of Rectangle : ";
    cin >> R >> C; 
    for(int i = 1 ; i <= R ; i++){
        for(int j = 1 ; j <= C ; j++){
            cout << "* ";
        }
        cout << endl;
    }
}