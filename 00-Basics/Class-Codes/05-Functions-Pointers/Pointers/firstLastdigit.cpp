#include<iostream>
using namespace std;

void firstLast(int* , int* , int);

int main() {
    int n ;
    cout << "Enter a integer : ";
    cin >> n;

    int first = n , last = n;

    firstLast(&first , &last ,n);
    cout << "First digit : " << first << " , Last digit : " << last << endl;
}

void firstLast(int* first , int* last , int num){
    *last = *last % 10;

    for(int i = num ; i >= 10 ;){
        i /= 10;
        *first = i;
    }
}