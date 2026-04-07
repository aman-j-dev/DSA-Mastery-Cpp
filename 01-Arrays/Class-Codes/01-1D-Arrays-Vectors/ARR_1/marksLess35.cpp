// given an array of marks of students , if the marks of any student 
// is less than 35 prinnt its index

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter numbers of students : ";
    cin >> n;

    double mark[n];
    cout << "Enter the marks : ";
    for(int i = 0 ; i < n ; i++){
        cin >> mark[i];
    }
    for(int i = 0 ; i < n ; i++){
        if(mark[i] <=35){
            cout << i << " ";
        }
    }
}

