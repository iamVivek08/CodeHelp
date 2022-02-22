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
void insertNode( node* &tail , int data){
    node* temp = new node( data);
    tail->next = temp;
    tail = temp;
}
node* KReverseNode( node* head , int k){
    if (head == NULL) return NULL;
    node *prev = NULL;
    node* curr = head;
    node* nextnode = NULL;
    int cnt = 0;
    // STEP-1    Reverse k node
    while( curr != NULL && cnt < k ){
        nextnode  = curr -> next;
        curr->next = prev;
        prev = curr;   
        curr = nextnode;
        cnt++;
    }
    // cout <<prev->data<<" " << nextnode->data<<endl;
    // STEP-2  Remaining part is done by Recursive Call
    if( nextnode  != NULL){
        head ->next = KReverseNode( nextnode , k);
         }
         // Return prev as new head of reversed list
    head =  prev;
    return head;
}
void print( node* &head){
    node *temp = head;
    while ( temp != NULL){
        cout << temp->data<<" -> " ;
        temp = temp->next;
    }
    cout <<"NULL " <<endl;
}
int main( ){
    node* n1 = new node( 10 );
    node* head = n1;
    node* tail = n1;

    insertNode(tail , 20 );
    print( head);
    insertNode(tail , 30 );
    print( head);
    insertNode(tail , 40 );
    print( head);
    insertNode(tail , 50 );
    print( head);
    
    node * Krev = KReverseNode( head , 3);
    print ( Krev);

    return 0;
}