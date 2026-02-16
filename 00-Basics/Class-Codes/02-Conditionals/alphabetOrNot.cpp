#include<Iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a character : ";
    cin >> ch;

    if((ch>=65)&&(ch<=90)){
        cout << "Character is a capital alphabet.";
    }else if((ch>=97)&&(ch<=122)){
        cout << "Character is a small alphabet.";
    }else if((ch>=49)&&(ch<=57)){
        cout << "Character is a number.";
    }else{
        cout << "Character is a special character.";
    }
    return 0;
}
