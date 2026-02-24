//  number or Alphabet reversed triangle

// 5                    E
// 5 4                  E D
// 5 4 3                E D C
// 5 4 3 2              E D C B
// 5 4 3 2 1            E D C B A 


// n = 5;

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int reqNum;
    char ch;

    for(int i = 1 ; i <= n ; i++){
        reqNum = n;
        ch = (n+64);

        // Numbers
        // for(int j = 1 ; j <= i ; j++ , reqNum-- ){
        //     cout << reqNum << " ";
        // }


        // ALPHABET
        for(int j = 1 ; j <= i ; j++ , ch--){
            cout << ch  << " ";
        }

        cout << endl;
    }
    return 0;
}