#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){
    //basecase
    if(i > j) return true;
    //Processing
    if(str[i] != str[j]) {
        return false;
    }
    else {
        i++;
        j--;
        return checkPalindrome(str, i,j);//recursive call
    }
} 

int main(){
    string name = "abcba";
    bool isPalindrome = checkPalindrome(name, 0, name.length()-1);

    if(isPalindrome){
        cout << "It is a palindrome" << endl;
    }
    else{
        cout << "It is not a palindrome" << endl;
    }

    return 0;
}