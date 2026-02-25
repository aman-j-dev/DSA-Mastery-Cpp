// Number spiral


// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4        
// 4 3 2 2 2 3 4          
// 4 3 2 1 2 3 4          
// 4 3 2 2 2 3 4           
// 4 3 3 3 3 3 4           
// 4 4 4 4 4 4 4

// n=4;

#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int m = 2*num -1;  
    for(int i =1 ; i<=m ; i++){
        for(int j =1 ; j<= m ; j++){
            int a=i;
            int b=j;
            if(a>num){
                a=m+1-i;
            }
            if(b>num){
                b=m+1-j;
            }
                cout << num - min(a,b) + 1 << " ";
            }
            cout << endl;
        }
}