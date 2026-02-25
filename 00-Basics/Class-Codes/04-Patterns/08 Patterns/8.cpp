// ODD  number triangle


// 1
// 1 3 
// 1 3 5 
// 1 3 5 7
// 1 3 5 7 9

// n = 5

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int reqNum;
    for(int i = 1 ; i <= n ; i++){
        reqNum = 1;
        for(int j = 1 ; j <= i ; j++ , reqNum += 2){
            cout << reqNum << " ";
        }
        cout << endl;
    }
}