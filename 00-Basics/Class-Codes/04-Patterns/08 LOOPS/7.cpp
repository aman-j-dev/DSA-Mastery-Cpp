//  number or Alphabet reversed triangle reversed

// 5 4 3 2 1               E D B C A
// 5 4 3 2                 E D B C
// 5 4 3                   E D B
// 5 4                     E D
// 5                       E


// n = 5

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int reqNum;
    char ch;

    for(int i = 1 ; i <= n ; i++){
        ch = (n+64);
        reqNum = n;

        //  NUMBERS
        // for(int j = 1 ; j <= n+1-i ; j++ , reqNum--){
        //     cout << reqNum << " ";
        // }


        //  ALPHABET
        for(int j = 1 ; j <= n+1-i ; j++ , ch--){
            cout << ch << " ";
        }

        cout << endl;
    }
    return 0;
}