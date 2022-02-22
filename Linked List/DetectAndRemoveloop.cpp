#include <iostream>
#include<map> // to mark one key with one value, map is used 
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
bool detectcycle( node* head){

map<node*, bool> marked;

node* temp = head;

while( temp != NULL){

    // to detect a cycle if present
    if ( marked[temp] == true){
        cout <<" Present on element "<<temp->data<<endl;
        return true;
    }

    // to marked each value true after visited one time , but before that if marked true twice it means list containing cycle
    marked[temp] = true;
    temp = temp->next;
}
return false;
}
node* FloydDetectCycle( node* &head ){
// It is another method to detect cycle and it take O(1) space which is best than detectcycle (map)
    if ( head == NULL) return NULL;
    node* slow = head;
    node* fast = head;
    while( slow != NULL && fast != NULL){
        fast = fast->next;
        if( fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;

        if( slow == fast){
        // slow and fast meet at 
        cout <<"Detect loop(meet both pointer inside cycle) at a data "<< slow->data<<endl;
        return slow;
    }
    }
    
    return NULL; // if point of intersection is not found
}
node* startingPoint( node* &head){
// for removing cycle in a linked list , we have to find starting point of loop
    node* intersection = FloydDetectCycle( head );
    node* slow = head;
    
    while( slow != intersection ){
        slow = slow->next;
        intersection = intersection->next;    
    }
// After loop, slow will meet to intersection at the starting point of loop acc to love babbar theory
    return slow;
}
void removeloopNode( node* head){

node* startofLoop =startingPoint( head);
node* temp = startofLoop;

while( temp->next != startofLoop){
    temp = temp->next;
}
// now we reached the node before startloopnode 
temp->next = NULL;

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
    node* n1 = new node( 10 );
    node* head = n1;
    node* tail = n1;
    insertNode( tail , 20);
    printlist( head);
    insertNode( tail , 30);
    printlist( head);
    insertNode( tail , 40);
    printlist( head);
// to make a cycle/loop in linked list 
    tail->next = head->next;
    /*
    if(FloydDetectCycle(head) != NULL ){
        cout <<"Hence, Cycle is present. "<<endl;
    }else{
        cout <<"No Cycle  "<<endl;
    }
    */
    node* loop = startingPoint( head);
    cout <<"Starting node of cycle from"<<loop->data<<endl;
    removeloopNode(  head);
    printlist(head );
    return 0;
}