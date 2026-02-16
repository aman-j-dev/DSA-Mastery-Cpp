#include<iostream>
using namespace std;

// absolut value is basically mod of that number

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;

    if(num < 0){
        int nNum = -num;
        cout << "Absolute value of " << num << " is : " << nNum ;
    }else{
        cout << "Absolute value of " << num << " is : " << num;
    }
    return 0;
}