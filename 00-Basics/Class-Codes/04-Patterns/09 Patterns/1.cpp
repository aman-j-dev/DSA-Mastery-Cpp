// star pyramid 

//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

// n = 5;

#include<iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter a number : ";
    cin >> num;

    int printStar = 1;

    for(int i=1 ; i<=num ; i++){
        for(int j=1 ; j<=num-i ; j++){
            cout << "  ";
        }
        // for(int k=1 ; k<=i ; k++){
        //     cout << "* ";
        // }
        // for(int l =1 ; l<=i-1 ; l++){
        //     cout << "* ";
        // }

        // OR

        // for(int k=1 ;k <= 2*i -1 ;k++ ){
        //     cout << "* ";
        // }

        for(int k=1 ; k<=printStar; k++){
            cout << "* ";
        }
        printStar+=2;
        cout << endl;
    }
    return 0;
}