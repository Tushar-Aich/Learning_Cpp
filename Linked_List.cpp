#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
    public:
        Node(int data1, Node* next1){
            this->data = data1;
            this->next = next1;
        }
        Node(int data1){
            this->data = data1;
            this->next = nullptr;
        }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node (arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthLL(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp != nullptr){
        temp = temp -> next;
        count++;
    }
    return count;
}

int searchLL(Node* head, int element){
    Node* temp = head;
    while(temp != nullptr){
        if(temp->data == element) return 1;
        temp = temp -> next;
    }
    return 0;
}

int main(){
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2LL(arr);
    Node* temp = head;

    cout << "Linked List is :: ";
    while(temp != nullptr){
        cout << temp-> data << " ";
        temp = temp -> next;
    }cout << endl;

    cout << "Length of the Linked List is :: " << lengthLL(head) << endl;

    return 0;   
}