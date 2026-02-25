// Star triangle 

// *                    1                           A
// * *                  1 2                         A B
// * * *                1 2 3                       A B C
// * * * *              1 2 3 4                     A B C D 
// * * * * *            1 2 3 4 5                   A B C D E 

// n = 5

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    char ch = 'A';

    for(int i = 1 ; i <= n ; i++){

        //     *
        // for(int j = 1 ; j <=i ; j++){
        //     cout << "* ";


        //  Numbers
        // for(int j = 1 ; j <= i ; j++){
        //     cout << j << " ";
        // }


        //  Alphabet
        ch = 'A';
        for(int j = 1 ; j <= i ; j++ , ch++){
            cout << ch << " ";
        }
    
        cout << endl;
    }
    return 0;
}