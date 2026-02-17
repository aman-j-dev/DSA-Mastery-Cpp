#include<iostream>
using namespace std;

int main(){
    double marks;
    cout << "Enter your Marks : ";
    cin >> marks;

    (marks >= 33) ? cout << "Pass" : cout << "Fail";
    return 0;
}