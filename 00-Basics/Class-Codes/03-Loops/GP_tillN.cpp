
// AP      ->  a , a+d , a+2d , a+3d _ _ _ _ _ _ _ _ a+nd
//                 a -> First Term 
//                 d -> common difference
                
//                 an = a +(n-1)d



// GP      ->  a , ar , ar2 , ar3 _ _ _ _ _ _ _ _ _ a*r
//                 a -> First Term 
//                 r -> common ratio

//                 an = ar^(n-1)




//       3 , -9 , 27 , -81 , 243 _ _ _ _ _ _ _ _

//       r = -3

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter till you want to print GP : ";
    cin >> n;

    int a = 3 , r = -3 , term=a;


    for(int i=1 ; i<=n ; i++,term*=r){
        cout << term << " ";
    }
    return 0;
}