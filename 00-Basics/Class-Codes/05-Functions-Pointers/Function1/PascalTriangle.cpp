#include<iostream>
using namespace std;
// double factorial(int n);
// double permutation(double , double);
// double combination(double , double );

// int main(){
//     int num;
//     cout << "Enter a number : ";
//     cin >> num;
//     double toprint;
//     for(int i =0 ; i <= num ; i++){
//         for(int j = 0 ; j <=i ; j++){
//             cout << combination(i,j)<< " ";
//         }
//         cout << endl;
//     }


// }
// double factorial(int n){
//     double fact = 1;
//     for(int i = 2 ; i <= n ; i++){
//         fact = fact * i;
//     }
//     return fact;
// }

// double permutation(double n , double r){
//     double perm = 1;
//     for(int i = n ; i > n-r ; i--){
//         perm = perm * i;
//     }
//     return perm;
// }

// double combination(double n , double r){
//     double comb = (permutation(n,r)) / factorial(r);
//     return comb;
// }


int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;

    double value;

    for(double i = 0 ; i <= num ; i++){
        value = 1 ;
        for(double j = 0 ; j <= i ; j++){
            cout << value << " ";
            value = value * ((i-j)/(j+1));
        }
        cout << endl;
    }
    return 0;
}