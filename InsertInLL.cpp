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
    cout << "Array is converted to LL " << endl;
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

Node* insertHead(Node* head, int val){
    return new Node(val, head);
}

Node* insertTail(Node* head, int val){
    Node* temp = head;
    if(head == nullptr){
        return new Node(val);
    }
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}

Node* insertK(Node* head, int val, int k){
    if(head == nullptr){
        if(k == 1){
            return new Node(val);
        }else{
            return head;
        }
    }
    if(k == 1){
        return new Node(val, head);
    }
    int count = 0;
    Node* temp = head;
    while(temp != nullptr){
        count++;
        if(count == (k - 1)){
            Node* x = new Node(val, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2LL(arr);

    head = insertHead(head, 9);  // Inserting an elemnt to head
    print(head);

    head = insertTail(head, 12); // Inserting an element to tail
    print(head);

    head = insertK(head, 10, 3);
    print(head);

    return 0;
}