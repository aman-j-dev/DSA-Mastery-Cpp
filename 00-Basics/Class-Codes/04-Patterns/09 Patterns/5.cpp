//Number bridge

// 1 2 3 4 5 6 7 8 9
// 1 2 3 4   6 7 8 9
// 1 2 3       7 8 9
// 1 2           8 9
// 1               9

// n=5

#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;  

    int reqNum=1;
    int m =num-1;
    int nsp=1;

    for(int i =1 ; i<=2*num -1 ; i++){
        cout << i << " ";
    }
    cout << endl;
    for(int i =1 ; i<= m ; i++){
        reqNum = 1;
        for(int j =1 ; j<=m+1-i ; j++){
            cout << reqNum <<" ";
            reqNum++;
        }
        for(int k=1 ; k<= nsp ; k++){
            cout << "  ";
            reqNum++;
        }
        nsp +=2;
        for(int l=1 ; l<=m+1-i ; l++){
            cout << reqNum << " ";
            reqNum++;
        }
        cout << endl;
    }
}
