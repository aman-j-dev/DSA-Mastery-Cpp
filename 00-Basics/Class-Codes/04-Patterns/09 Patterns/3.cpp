// star diamond 

//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *


// n=5

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int nst1=1 , nst2= 2*(num -1)-1;
    for(int i=1 ; i<=num ; i++){
        for(int j=1 ; j<=num-i ; j++){
            cout << "  ";
        }
        // for(int k=1 ; k<= 2*i -1 ; k++){
        //     cout << "* ";
        // }

        // OR
        for(int k =1 ; k<=nst1 ; k++){
            cout << "* ";
        }
        nst1 +=2;
        cout << endl;
    }
    for(int a=1 ; a<=num-1 ; a++){
        for(int b=1 ; b<=a ; b++){
            cout << "  ";
        }
        // for(int c = 1 ; c<=2*(num-1-a)+1 ; c++){
        //     cout << "* ";
        // }

        // OR

        for(int c=1 ; c<=nst2 ; c++){
            cout << "* ";
        }
        nst2 -=2;
        cout << endl;
    }
    return 0;
}