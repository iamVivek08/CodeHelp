#include <iostream>
using namespace std;

class node{
public:
int data;
node* next;
node* prev;
node(int val){
    this->data = val;
    this->prev = NULL;
    this->next = NULL;
}
};
void insertAthead( node* &head ,node* &tail, int data){
    //  If Empty list(node)
     if ( head == NULL){
        node* temp = new node(data);
        head = temp; // both head and tail pointing towards new node
        tail =  temp; // both head and tail pointing towards new node
    }
    else{
    node* temp = new node( data);
    temp->next = head;
    head ->prev= temp;
    head = temp;
    }
}
void insertAtTail( node* &tail , node* &head, int data){
      if ( tail == NULL){
        node* temp = new node(data);
        tail = temp; 
        head = temp;
    }
    else{
    node* temp = new node(data);
    tail->next = temp;  // store temp( new node) in tail next pointer
    temp->prev = tail; //  store tail value in temp prev pointer
    tail = temp;  // update tail
    }
}
void insertAtPosition( node* &head,node* &tail, int pos , int data){

    // Inserting at Start
    if ( pos == 1){
        insertAthead(head ,tail, data);
        return ;
    }
    node* nodeToinsert = new node( data);
    int cnt = 1;
    node* temp = head;
    while( cnt < pos-1 ){
        temp = temp->next;
        cnt++;
    }
    // Insert at last
    if ( temp->next == NULL){
        insertAtTail(tail ,head, data);
        return;
    }
    // Insertion in Between nodes
    nodeToinsert -> next = temp->next;
    temp->next->prev =nodeToinsert;
    temp->next = nodeToinsert;
    nodeToinsert->prev = temp; 
}
void deleteNode( node* &head , int pos){
 if ( pos == 1){
     node* temp = head;
     
     head = head->next;
     temp->next = NULL;
     delete temp;
 }
 else{
 int cnt = 1;
   node *cur = head;
   node* prev = NULL;
 while ( cnt <  pos){
     prev = cur;
     cur = cur  -> next;
     cnt++; 
 }
 // delete node at pos
 prev ->next = cur->next;
 cur-> prev = NULL;
 }
}
void print( node* &head){
    node *temp = head;
    while ( temp != NULL){
        cout << temp->data<<" -> " ;
        temp = temp->next;
    }
    cout <<"NULL " <<endl;
}
int main(){
// node *n1 = new node(10);
// node* head = n1;
// node* tail = n1;
node* head = NULL;
node* tail = NULL;
insertAthead(head , tail ,5);
print ( head);
insertAtTail(tail ,head, 20);
print ( head);
insertAtTail(tail ,head, 30);
print ( head);
insertAtPosition(head , tail,4 , 35 );
print ( head);

deleteNode(head , 1);
print ( head);
    return 0;
}