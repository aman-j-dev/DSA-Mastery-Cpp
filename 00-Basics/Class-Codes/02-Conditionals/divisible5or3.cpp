#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a num : ";
    cin >> num;

    if((num%3 == 0)&&(num%5 == 0)){
        cout << num << " is divisible by 3 and 5 both";
    }else{
        if(num % 3 == 0){
            cout << num << " is divisible by 3";
        }else if(num % 5 == 0){
            cout << num << " is divisible by 5";
        }else{
            cout << num << " is neither divisible by 3 nor by 5";
        }
    }
    return 0;
}