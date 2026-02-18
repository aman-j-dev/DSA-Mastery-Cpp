
// 4 , 7 , 10 , 13 , 16 _ _ _ _ _ _ _ 
// a -> 4
// d -> 3

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number till AP you want to print : ";
    cin >>n;

    int a = 4 , d = 3 ;
    int add = 0;

    for(int i = 1 ; i<=n ; i++ , add += d){
        cout << (a+add) << endl;
    }
    return 0;
}