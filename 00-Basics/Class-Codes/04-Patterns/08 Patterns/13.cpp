// binary triangle

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

// n = 5

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    bool bin;
    for(int i = 1 ; i <= n ; i++){
        if(i%2 == 0){
            bin = 0;
        }else{
            bin = 1;
        }
        for(int j = 1 ; j <= i ; j++){
            cout << bin << " ";
            bin = !bin;
        }
        cout << endl;
    }
}