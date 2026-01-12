
// {x} = x - [x]          fractional part

#include<iostream>
using namespace std;

int main(){
    
    double a = -1.3;
    if(a<0){
        double b = a-1;
        cout << "Fraction part is : " << ( a - (int)b) << endl;
    }else{
        cout << "Fractional part is : " << (a-(int)a) << endl;
    }
    return 0;
}