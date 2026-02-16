#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a integer : ";
    cin >> num;

    // if((num < 100)||(num > 999)){
    //     cout << "Its not a three digit number.";
    // }else{
    //     cout << "Its a three digit number.";
    // }



    if((num > 99)&&(num<1000)){
        cout << "Its a three digit number.";
    }else{
        cout << "Its not a three digit number.";
    }
    return 0;
}