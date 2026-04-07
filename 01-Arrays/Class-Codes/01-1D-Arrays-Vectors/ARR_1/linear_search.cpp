#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    double arr[n];
    cout << "Enter the array elements : ";
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    double x;
    cout << "Enter the number you want to find : ";
    cin >> x;

    int times = 0;

    for(int i =0 ; i < n ; i++){
        if(arr[i] == x ){
            times++;
        }
    }

    if(times == 0){
        cout << x << " doesn't exist in array";
        return 1;
    }

    int index[times];
    for(int i = 0 , j = 0 ; i < n ;i++){
        if(arr[i] == x ){
            index[j] = i;
            j++;
        }
    }

    cout << "Element exist is array with index : ";
    for(int i = 0 ; i < times ; i++){
        cout << index[i] <<" ";
    }
}