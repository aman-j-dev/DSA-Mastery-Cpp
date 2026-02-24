#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    char ch;

    for(int i = 1 ; i<=n ; i ++){
        ch = 'A';
        for(int j = 1 ; j <= i ; j++ , ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}