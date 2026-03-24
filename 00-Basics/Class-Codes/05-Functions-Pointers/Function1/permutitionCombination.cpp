#include<iostream>
using namespace std;
long double factorial(long double n);
long double permutation(long double n , long double r);
long double combination(long double n , long double r);

int main(){
    long double n , r;
    do{
        cout << "Enter value of n , r respectively : ";
        cin >> n >> r;
        if(n<r){
            cout << "ERROR!" << endl << "n can't be smaller the r" << endl;
        }
    }while(n<r);
    long double Permutation , Combination;

    Permutation = permutation(n,r);
    Combination = combination(n,r);

    cout << "Permutation : " << fixed << Permutation << endl << "Combination : " << fixed << Combination << endl;
    return 0;
}

long double factorial(long double n){
    long double fact=1;
    for(int i=2 ; i <= n ; i++){
        fact = fact * i;
    }
    return fact;
}


long double permutation(long double n , long double r){
    long double num , denom;
    num = factorial(n);
    denom = factorial((n-r));
    long double perm = num / denom;
    return perm;
}

long double combination(long double n , long double r){
    long double num , denom;
    num = factorial(n);
    denom = (factorial((n-r)) * factorial(r));
    long double comb = num / denom;
    return comb;
}
