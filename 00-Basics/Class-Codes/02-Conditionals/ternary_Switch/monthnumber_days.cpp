#include<Iostream>
using namespace std;

int main(){
    
    int month;
    char isLeap;

    cout << "Enter month number : ";
    cin >> month;

    if(month == 2){
        cout << "Is the year a Leap year : ";
        cin >> isLeap;
    }

    switch(month){
        case 1 :
            cout << "Total days in January : 31";
            break;
        case 2 :
            if(isLeap == 'Y' || isLeap == 'y'){
                cout << "Total days in February of Leap year : 29";
            }else if(isLeap == 'N' || isLeap == 'n'){
                cout << "Total days in February in common year : 28";
            }else{
                cout << "Wrong Input"; 
            }
            break;
        case 3 :
            cout << "Total days in March : 31";
            break;
        case 4 :
            cout << "Total days in April : 30";
            break;
        case 5 :
            cout << "Total days in May : 31";
            break;
        case 6:
            cout << "Total days in June : 30";
            break;
        case 7 :
            cout << "Total days in July : 31";
            break;
        case 8 :
            cout << "Total days in August : 31";
            break;
        case 9 :
            cout << "Total days in September : 30";
            break;
        case 10 :
            cout << "Total days in October : 31";
            break;
        case 11 :
            cout << "Total days in November : 30";
            break;
        case 12 :
            cout << "Total days in December : 31";
            break;

    }
}