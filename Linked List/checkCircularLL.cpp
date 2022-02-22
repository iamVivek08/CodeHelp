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
bool IsCircular( node* head){
    if ( head == NULL || head ->next == NULL) return true ;

    node* checkhead = head ->next;
// This condition terminated only when next node(or any of the node) is empty  or if check reaches to the before head element and next node is head
    while( checkhead != NULL && checkhead != head){
        checkhead = checkhead->next;
        }
       
// Now check is reaches to the either head element or loop terminates due to non circular list
        if( checkhead == head){
          return true;
         }
        return false;
    }

void printlist( node* &head){
    node *temp = head;
    while ( temp != NULL){
        cout << temp->data<<" -> " ;
        temp = temp->next;
    }
   
    cout <<"NULL " <<endl;
}
int main( ){
node* n1 = new node(10);
node* head =n1  ;
node* tail =n1  ;

insertNode( tail , 20);
printlist(head);
insertNode( tail , 30);
printlist(head);
insertNode( tail , 40);
printlist(head);

tail->next = head;
// cout<<"head "<<head->data <<" "<<"tail"<<tail->data<<endl;

/*  Another method */
// To check circular
/*node* head = new node(10);
head->next = new node(20);
head->next->next = new node(30);
head->next->next->next = new node(40);
head->next->next->next->next = head; */

// To check non_circular
/* node* head = new node(10);
head->next = new node(20);
head->next->next = new node(30);
head->next->next->next = new node(40); */

if (IsCircular(head)){
    cout<<"Linked list is Circular "<<endl;
}
else{
    cout <<"Linked list is not circular!";
}
    return 0;
}