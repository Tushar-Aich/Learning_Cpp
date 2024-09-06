#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data, Node* next){
            this->data = data;
            this->next = next;
        }
        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};

Node* ConvertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
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

Node* removeHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* removeTail(Node* head){
    Node* temp = head;
    if(temp == NULL || temp->next == NULL) return NULL;
    while(temp->next->next != NULL){
        temp = temp -> next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* deleteKElement(Node* head, int k){
    if(head == nullptr) return head;
    if(k == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int count = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != nullptr){
        count++;
        if(count == k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {1,5,7,2,9};
    Node* head = ConvertArr2LL(arr);
    print(head);
    // head = removeHead(head);  removing head or first element
    head = deleteKElement(head, 3); //removing Kth element
    print(head);
    head = removeTail(head);  // removing tail or last element
    print(head);

    return 0;
}