#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    char ch;

    for(int i=1 ; i<=n ; i++){
        ch='A';
        for(int j=1 ; j<=i ; j++){
            if(i%2 == 0){
                cout << ch << " ";
                ch++;
            }else{
                cout << j << " ";
            }
        }
        cout << endl;
    }
}