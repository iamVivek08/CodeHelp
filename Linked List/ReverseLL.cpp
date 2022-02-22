#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    // default constructor
    node(int val){
        this->data = val;
        this-> next = NULL;
    }
};
void insertAtTAil( node* &tail , int d){
    node* temp = new node( d);
    tail->next = temp;
    tail = temp;
}
node* ReverseLL( node* &head  ){
node* prev = NULL;
node* cur = head;
node* forward = NULL;
while ( cur != NULL){
    forward = cur->next;
    cur->next = prev; // reversing node 
    prev = cur;
    cur = forward; 
}
// NOTE head next is also became NULL bcoz link are reversed now
head = prev ; //  last node is now new head
return head;
}
// Recursive Approach - 1
void Reverse( node* &head , node* cur , node* prev){
    // If recursive call goes to the last node(base case)
    if ( cur == NULL ){
        head = prev;
        return;
    }
    node* forward = cur->next; // save the next node link
    Reverse( head , forward , cur); // call from next node after cur
    cur->next = prev; // handle one case only so the first node to reverse the link to prev
}
// Recursive Approach - 2
node* Reverse2( node* &head ){
    if ( head == NULL || head-> next == NULL){
        return head;
    }
    node* newhead = Reverse2( head->next);

    head->next->next = head;
    head->next = NULL;

    return newhead;
}
void print( node* &head){
    node *temp = head;
    while ( temp != NULL){
        cout << temp->data<<" -> " ;
        temp = temp->next;
    }
    cout <<"NULL " <<endl;
}
int main ( ){
node* n1 = new node(10);
// node* n2 = new node(20) ;
// node* n3 = new node(30);
// node* n4 = new node(40);
node* head = n1;
node* tail = n1;
insertAtTAil( tail , 20);
insertAtTAil( tail , 30);
insertAtTAil( tail , 40);
insertAtTAil( tail , 50);
print(head);
//  Reverse a node
 node* ans =  ReverseLL( head);
 print( ans); 
 
/* node* cur = head;  node* prev = NULL;
 Reverse( head , cur , prev);
 print( head); */

/* node* reverse = Reverse2( head );
  print( reverse);
  */
    return 0;
}