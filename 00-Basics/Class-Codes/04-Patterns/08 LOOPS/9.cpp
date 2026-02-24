// Alphabet square 

// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E

// n = 5

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    char ch = 'A';
    
    for(int i = 1 ; i <= n ; i++){
        ch = 'A';
        for(int j =1 ; j <= n ; j++ , ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}