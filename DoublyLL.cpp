#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node* prev;
    public:
        Node(int data1, Node* next1, Node* prev1){
            this->data = data1;
            this->next = next1;
            this->prev = prev1;
        }
        Node(int data1){
            this->data = data1;
            this->next = nullptr;
            this->prev = nullptr;
        }
};

Node* convertArr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node (arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    cout << "Array is converted to DLL " << endl;
    return head;
}

void print (Node* head){
    Node* temp = head;
    cout << "Linked List is :: ";
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp-> next;
    }cout << endl;
}

int main(){

    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertArr2DLL(arr);
    print(head);

    return 0;
}