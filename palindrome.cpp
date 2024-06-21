#include<iostream>
using namespace std;

bool palindrome(char str[], int n){
    int s = 0;
    int e = n - 1;

    while(s < e){
        if(str[s] == str[e]){
            return true;
            s++;
            e--;
        }

    return false;
    }
}

int getLength(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){

    char str[10];
    cout<<"Enter the string: ";
    cin>>str;

    int length = getLength(str);

    int similar = palindrome(str, length);

    if(similar == true){
        cout<<"It is a palindrome"<<endl;
    }else{
        cout<<"It is not a palindrome"<<endl;
    }

    return 0;
}