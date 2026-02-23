#include<iostream>
using namespace std;

int main(){
    int num , count = 0;
    cout << "Enter a number till you want prime number : ";
    cin >> num;

    cout << "Prime numbers till " << num << " : " << endl;

    for(int n = 2 ; n <= num ; n++){
        int isPrime = 1;

        for(int i = 2 ; i < n ; i++){
            if(n%i == 0){
                isPrime = 0;
            }
        }
        if(isPrime == 1){
            count++;
            cout << n << " ";
        }
    }

    if(count == 0){
        cout << "There isnt a single prime number";
        return 1;
    }

    cout << endl << "Total number of Prime number till " << num << " is : " << count;
    return 0;
}