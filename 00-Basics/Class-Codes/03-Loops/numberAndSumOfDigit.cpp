#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int count = 0;
    int sum=0;
    for( ; num != 0 ; ){

        count++;
        sum = sum + (num%10);
        num/=10;

    }
    cout << "Total digits are : " << count << endl;

    cout << "Sum of digits are : " << sum << endl;

    return 0;
    

}