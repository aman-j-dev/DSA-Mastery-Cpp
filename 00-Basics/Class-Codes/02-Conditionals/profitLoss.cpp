#include<iostream>
using namespace std;

int main(){
    double CP , SP;
    cout << "Enter Cost price and Selling price respectively : ";
    cin >> CP >> SP;

    if(CP < SP){
        double profit = SP - CP;
        cout << "CONGRATULATION !!!! \nYou have made Profit of : " << profit;
    }else{
        double loss = CP - SP;
        cout << "Loss of : " << loss;
    }
    return 0;
}