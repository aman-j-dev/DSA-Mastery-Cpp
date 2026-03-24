#include<iostream>
using namespace std;
void starTriangle(int);
int main(){
    int n;
    cout << "Enter a integer : ";
    cin >> n;
    starTriangle(n);
    return 0;
}
void starTriangle(int a){
    for(int i = 1 ; i <= a ; i++){
        for(int j =1 ; j <= i ; j++){
            cout << "* ";
        }
        cout << endl;
    }
}