// Star Triangle reverse

// * * * * *        1 2 3 4 5       A B C D E 
// * * * *          1 2 3 4         A B C D
// * * *            1 2 3           A B C
// * *              1 2             A B 
// *                1               A

// n = 5

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    char ch = 'A';

    for(int i = 1 ; i <= n ; i++){
        //  *
        // for(int j = 1 ; j <= n+1-i ; j++){
        //     cout << "* ";
        // }


        // number
        // for(int j = 1 ; j <= n+1-i ; j++){
        //     cout << j << " ";
        // }


        //  ALPHABET
        ch = 'A';
        for(int j = 1 ; j <= n+1-i ; j++ , ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}
