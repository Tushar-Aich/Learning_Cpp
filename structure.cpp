#include<iostream>
using namespace std;

struct student{
    char name[10];
    string studentName;
    int rollno;
    float marks[5];
} learner ;

int main(){
    cout << "enter the roll no." << " ";
    cin >> learner.rollno;

    cout << "Enter Name: ";
    cin >> learner.studentName;

    cout<<"Enter the marks: ";
    for(int i = 0; i < 5; i++){
        cin >> learner.marks[i];
    }

    float avg, total;

    cout << "Student Name: ";
    cout << learner.studentName << endl;

    cout << "Student roll no. : " << learner.rollno << endl;

    for(int i = 0; i < 5; i++){
        cout << "Subject " << i + 1 <<" "<< learner.marks[i] << endl;
        total += learner.marks[i];
    }
    cout << "Total marks: " << total << endl;
    avg = total / 5;
    cout << "Average marks: " << avg << endl;

    return 0;
}