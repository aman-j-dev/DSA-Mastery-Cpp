#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a integer :";
    cin >> num;

    if((num%3 == 0)&&(num%5 == 0)){
        cout << num << " is divisible by 3 and 5 both";
    }else{
        cout << num << " is not divisible by 3 and 5 both";
    }
    return 0;
}