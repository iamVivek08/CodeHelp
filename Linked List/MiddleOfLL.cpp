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
    // Destructor call 
    /* ~node( ) {
        int val = this->data;
        if( this ->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << " Memory is free for node with data "<<val<<endl;
    } 
    */
};
void insertAtTail( node* &tail , int data){
    node* temp = new node( data);
    tail->next = temp;
    tail = temp;
}
// Approach 1
int GetLength( node* &head){
    node* temp = head;
    int len = 0;
    while( temp != NULL){
        len++;
        temp = temp->next;
    }
    cout <<"Total Length of Node : "<<len<<endl;
    return len;
}
node* MidNode( node* &head ){
    int  lent = GetLength(head);
    int ans = (lent/2);

    node* cur = head;
    int cnt = 0;
    while ( cnt < ans){
        cur = cur->next;
        cnt++;
    }
    
    return cur;
}
// Approach 2
node* midnode2( node* &head){
    if( head == NULL || head->next == NULL)
    return head;
    node* curr = head;
    node* doubl = curr->next;
    node* single = curr; // single node return the mid node answer

    while( doubl != NULL){
        doubl = doubl->next; 
        // to iterate  if second next is not empty
        if( doubl != NULL){ 
            doubl = doubl->next;
        }
        // to increase single if doubl move by one or two step 
        single = single->next;
    }
    return single;
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
    node* n1 = new node( 10);
    node* head = n1;
    node* tail = n1;
    insertAtTail( tail ,  20);
    print( head);
    insertAtTail( tail ,  30);
    print( head);
    insertAtTail( tail ,  40);
    print( head);
    insertAtTail( tail ,  50);
    print( head);
    // node* midnode = MidNode( head );
    // cout <<"The Middle Node is : " <<midnode->data;

    node* newmid = midnode2( head);
    cout <<newmid->data;
    return 0; 
}