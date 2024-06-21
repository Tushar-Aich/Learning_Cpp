#include<iostream>
using namespace std;

void reverse(string& str, int i, int j) {
    //basecase
    if(i > j) return;

    //preocessing
    swap(str[i], str[j]);
    i++;
    j--;

    //recursive call
    reverse(str, i, j);
}

int main(){

    string name = "Tushar";
    reverse(name, 0, name.length()-1);
    cout <<"Reversed name is: "<< name << endl;

    return 0;
}