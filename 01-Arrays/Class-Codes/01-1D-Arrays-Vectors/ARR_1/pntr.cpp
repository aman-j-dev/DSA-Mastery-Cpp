#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int* ptr = arr;        //ptr points to the first value (index 0) of arr

    cout << *ptr <<endl;
    cout << *(ptr+1);

}