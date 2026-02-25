// Number pyramid palindrome


//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1 

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int reqNum1,reqNum2;

    for(int i=1 ; i<=num ; i++){
        for(int j = 1 ; j <= num-i ; j++ ){
            cout << "  ";
        }
        reqNum1= 1;
        for(int k = 1 ; k <= i ; k++,reqNum1++){
            cout << reqNum1 << " ";
        }
        reqNum2 = i-1;
        for(int l = 1 ; l<=i-1 ; l++ , reqNum2--){
            cout << reqNum2 << " ";
        }
        cout << endl;
    }
    return 0;
}