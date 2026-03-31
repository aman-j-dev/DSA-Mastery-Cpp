#include<iostream>
using namespace std;

void swapp(double *p1 , double *p2){
    double temp;
    temp = *p2;
    *p2 = *p1;
    *p1 = temp;
} 

int main(){
    double a = 10 , b = 20;
    // swapp(&a,&b);
    double *p = &a;
    double *q = &b;
    swapp(p,q);
    cout << "After swap : " << a << " , " << b << endl;
}