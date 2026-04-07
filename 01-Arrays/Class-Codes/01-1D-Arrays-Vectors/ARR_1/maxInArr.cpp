#include<iostream>
#include<climits>
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

    // double Max = arr[0];
    double Max = DBL_MIN;

    for(int i = 0 ; i < n ; i++){
        // if(arr[i] > Max){
        //     Max = arr[i];
        // }
        Max = max(arr[i],Max);
    }
    cout << "Maximum in array is : " << Max ;
}