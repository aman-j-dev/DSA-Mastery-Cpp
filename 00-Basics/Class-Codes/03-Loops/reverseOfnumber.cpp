#include<iostream>
using namespace std;

int main(){
    int num,n,reversedNum=0;
    cout << "Enter a number : ";
    cin >> num;
    n=num;
    int count = 0;
    int multiple;
    
    for(; n > 0 ; ){
        count++;
        if(count == 1){
            multiple = 1;
        }else{
            multiple*=10;
        }
        n/=10;
    }
    n = num; 
    for(; multiple!=0 ; multiple/=10 , n/=10){
        reversedNum = reversedNum + ((n%10)*multiple);
    }
    cout << "Reverse of " << num << " is : " << reversedNum << endl;
}