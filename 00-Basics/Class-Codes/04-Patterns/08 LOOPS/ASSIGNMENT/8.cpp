#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    char ch;
    for(int i =1 ; i <=n ; i++){
        for(int j = 1 ; j <= n - i ; j++){
            cout << "  ";
        }
        ch = 'A';
        for(int k=1 ; k<=i ; k++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}