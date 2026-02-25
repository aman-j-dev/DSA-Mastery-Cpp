#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int reqNum;

    for(int i=1 ; i <= n ; i++){
        reqNum = i;
        for(int j=1 ; j<=i ; j++,reqNum--){
            cout << reqNum << " ";
        }
        cout << endl;
    }
    return 0;
}