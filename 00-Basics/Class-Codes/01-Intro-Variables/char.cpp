#include<iostream>
using namespace std;

int main(){
    char ch = 97;
    cout << (int)ch << endl;
    cout << ch << endl;
    cout << ch+10 << endl;
    cout << (char)(ch+10) << endl;
    return 0;
}
// ASCII A = 65      Z = 90
// a = 97            z = 122
// space = 32
// 1 = 49            9 = 57

// ch+10    will add 10 in ch give integer

// ASCII
//  0 to 31  unprintable control code
// 32 to 127 printable character 