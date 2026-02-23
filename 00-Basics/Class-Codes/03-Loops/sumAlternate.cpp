// 1-2+3-4+5-6+7-8 _ _ _ _ _ _ 

#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int n = 500;
    for(int i = 1 ; i <= n ; i++ ){
        if(i % 2 == 0){
            sum = sum - i;
        }else{
            sum = sum + i;
        }
    }
    cout << "Sum is : " << sum;
    return 0;
}