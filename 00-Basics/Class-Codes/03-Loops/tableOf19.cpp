#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Table of 19 till : ";
    cin >> n;

    // for(int i=1 ; i <= n ; i++){
    //     cout << "19 X " << i << " = " << (19*i) << endl;
    // }

    for(int i = 19,j = 1 ; j <= n ; i+=19,j++){
        cout << "19 X " << j << " = " << i << endl;
    }

    return 0;
}