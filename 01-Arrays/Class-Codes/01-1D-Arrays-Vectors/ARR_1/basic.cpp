#include<iostream>
using namespace std;

int main(){
    double x[10] = {1,2,3,4,5,6,7};
    // 0 1 2 3 4 5 6 7 8 9      indexes
    x[5] = 5;

    for(int i = 0 ; i < 10 ; i++){
        cout << x[i] << endl;
    }
}