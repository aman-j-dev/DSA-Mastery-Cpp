// floyd's triangle

// 1
// 2 3
// 4 5 6 
// 7 8 9 10

// n = 4

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int reqNum = 1;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++ , reqNum++){
            cout << reqNum << " ";
        }
        cout << endl;
    }
    return 0;
}