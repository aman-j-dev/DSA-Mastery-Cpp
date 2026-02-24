// Star Cross when n iis ODD

// *       *
//   *   *  
//     * 
//   *   *
// *       *

// n = 5

#include<iostream>
using namespace std;

int main(){
    int n;

    do{
        cout << "Enter a number : ";
        cin >> n;
    }while(n % 2 == 0);

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if((i+j == n+1)||(i==j)){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}