#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter numbers of students : ";
    cin >> n;

    double arr[n];
    cout << "Enter the marks : ";
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    double sum = 0;

    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
    }
    cout << "Sum : " << sum;
}