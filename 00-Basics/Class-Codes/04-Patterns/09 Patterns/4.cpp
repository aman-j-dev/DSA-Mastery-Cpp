// Star bridge

// * * * * * * * 
// * * *   * * *
// * *       * *
// *           *

// n = 4;

#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;  

    // int nst=num-1,nsp=1;
    // for(int i=1 ; i<=num ; i++){
    //     for(int j=1 ; j<=num+1-i ;j++ ){
    //         cout << "* ";
    //     }
    //     for(int k=1 ; k <=nsp ;k++){
    //         if(i==1){
    //             nsp -=2;
    //             break;
    //         }
    //         cout << "  ";
    //     }
    //     for(int l=1 ; l<=nst ;l++ ){
    //         cout << "* ";
    //     }
    //     if(i==1){
    //         nst++;
    //     }
    //     nst--;
    //     nsp +=2;
    //     cout << endl;

    // }



    // OR
    // Print first row separately;
    int m = num-1 , nsp = 1;;
    for(int i=1 ; i<= 2*num -1 ; i++){
        cout << "* ";
    }
    cout << endl;
    for(int i = 1 ; i <= m ; i++){
        for(int j = 1; j<=m+1-i ; j++){
            cout << "* ";
        }
        for(int k =1 ; k<=nsp ; k++){
            cout << "  ";
        }
        nsp +=2;
        for(int l =1 ; l<=m+1-i ; l++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}