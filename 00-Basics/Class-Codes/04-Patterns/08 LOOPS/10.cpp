// Star plus only when n is ODD

//     *
//     *
// * * * * *
//     *
//     * 


// n = 5

#include<iostream>
using namespace std;

int main(){
    int n;
    
    do{
        cout << "Enter an number : ";
        cin >> n;
    }while(n % 2 == 0);

    int mid = (n/2) + 1;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(i==mid || j==mid){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}