#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a alphabet you want to check if its vowel or consonant : ";
    cin >> ch;

    if(((ch>=65)&&(ch<=90))||((ch>=97)&&(ch<=122))){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            cout << "Character is a Vowel";
        }else{
            cout <<  "Character is a Consonant";
        }
    }else{
        cout << "Character is not a alphabet.";
    }
    return 0;
}