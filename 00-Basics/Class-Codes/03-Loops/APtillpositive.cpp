
// 100 , 97 , 94 , _ _ _ _ _ only positive
// a -> 100 
// d -> -3

#include<iostream>
using namespace std;

int main(){
    int a = 100 , d = -3 , add = 0 , term;
    for(int i = 1 ; term > 0 ; i++,add+=d){
        term = a + add;
        if((term)<0){
            cout <<"Last term index : "<< i-1;
            break;
        }
        cout << term << endl;
    }
    return 0;
}