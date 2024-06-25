#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void print(Node* head){
    Node* curr = head;
    while(curr !=NULL){
        cout<<curr->data<<"->";
        curr = curr->next;
    }
}

Node* insertAtbegin(Node* head, int x){
    Node* temp = new Node(x);
    temp->next = head;
    return temp;
}

Node* insertAtend(Node* head, int x){
    Node* temp = new Node(x);
    if(head==NULL){
        return temp;
    }
    //last wala node temp pe and temp null pe
    Node* curr = head;
    while(curr->next !=NULL){
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

Node* deleteFromBegin(Node* head){
    //edge case
    if(head==NULL){
        return NULL;
    }
    Node* temp = head;
    head = temp->next;
    delete temp;
    return head;
    // return head->next;
    
}
Node* deleteFromEnd(Node* head){
    Node* curr = head;
    while(curr->next->next !=NULL){
        curr = curr->next;
    }
    curr->next = NULL;
    return head;
}

Node* insert(Node* head, int x, int pos){
    Node* temp = new Node(x);
    if(head==NULL) return NULL;
    if(pos==1){
        return insertAtbegin(head,x);
    }
    Node* curr = head;
    for(int i=0 ; i<pos-2; i++){
       curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

Node* deleteFromPos(Node* head,int pos){  
   if (head == nullptr) return nullptr;
    Node* temp = head;
    if (pos == 1) {
        head = temp->next;
        delete temp;
        return head;
    }
    for (int i = 1; temp != nullptr && i < pos - 1; ++i) {
        temp = temp->next;
    }
    if (temp == nullptr || temp->next == nullptr) return head;
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
    return head;
}

Node* reverseList(Node* head){
    
    Node* prev= NULL;
    Node* curr= head;
    while(curr!=NULL){
        Node* next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}




int main(){
    Node* head = new Node(10); //new- dyna mem alloacte in heap
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    print(head);
    cout<<endl;
   head= insertAtbegin(head,50);
    print(head);
    cout<<endl;
    insertAtend(head,300);

    print(head);
    cout<<endl;
   head= deleteFromBegin(head);
    

    print(head);
    deleteFromEnd(head);
    cout<<endl;
    print(head);
    cout<<endl;
    insert(head,500,3);
    print(head);
    cout<<endl;
    head=deleteFromPos(head,3);
    print(head);
    cout<<endl;
    head=reverseList(head);
    print(head);

}

