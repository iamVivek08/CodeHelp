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

void insertAthead( node* &head , int d){
    node *temp = new node(d);
    temp->next = head; // new node(temp) pointing to head
     head = temp ; // update head
}

void insertAtTail( node* &tail , int d){
    // create new node to insert at a tail
    node* temp = new node( d); 
    tail-> next = temp; // tail pointing to new node(temp)
    tail = temp; // update tail
}

void insertAtPosition( node* &head ,node* &tail,  int pos , int d){
    // insert at Start
    if (pos ==1) {
        insertAthead(head , d); // update head
        return ;
    }

    node *nodeToinsert = new node(d);
    node *temp= head;
    int count =1;  
    while( count < pos-1){
     temp= temp->next; // last node before inserting pos stored in temp now
     count++;
    }
    // insert at End
    if ( temp ->next == NULL){
        insertAtTail(tail , d); // update Tail
        return;
    }
    nodeToinsert->next = temp->next;
    temp->next = nodeToinsert;
}

void deleteNode(node* &head , int pos){
    if ( pos == 1){
        node* temp = head;
        head = head->next;
        delete temp;
    }
    node* prev= NULL;
    node* cur = head;
    int cnt = 1;
    while (  cnt< pos){
        prev = cur;
        cur = cur->next;
        cnt++;
    }
  prev->next = cur->next; // main step , to store next node after deletion node in next of prev 
  delete cur;
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
    node *n1 = new node(10);
    // node*n2 = new node(20);
  
    node *head = n1;
    node *tail = n1;
     print ( head);
    //                            ****************** INSERTION ***********************
    // insertAthead(head , 5);
    // print ( head);
    insertAtTail( tail , 20);
    print ( head);
    insertAtTail( tail , 30);
    print ( head);
    insertAtTail( tail , 40);
    print ( head);
    insertAtPosition(head ,tail,3, 25 );
     print ( head);
    insertAtPosition(head,tail ,1, 5 ); // new head(updated)
     print ( head);
    insertAtPosition(head, tail,7, 50 ); // new tail(updated)
     print ( head);
    //                         ****************** DELETION***********************
    //  deleteNode(head ,1 );
    //  print ( head);    
    deleteNode(head ,6 );
     print ( head);
    // Verification of head and tail
    // cout <<"Head -> " <<head->data <<" and Tail -> "<<tail->data;
    return 0;
}