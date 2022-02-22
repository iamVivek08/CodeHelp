# include <iostream>
#include<deque>
using namespace std;
// Deque is a doubly  ended queue in which insertion and deletion is possible  from starting and ending part  

int main( ){

    deque <int > d;
    d.push_back(9);
    d.push_back(4);

    d.push_front(2);
    d.push_front(1);

    cout <<" Element insertion from start and end :";
    for ( int i:d){
     cout  <<i<<" ";
    }
    cout <<endl<<"first element :"<<d.front( )<<" "<< "last element :"<<d.back()<<endl;
    cout<<" check position:"<<d.at(3) <<endl;

    cout <<"size :"<<d.size() <<endl;
    //erase two element from begining 
    d.erase(d.begin() , d.begin()+2);
    for ( int i:d){
     cout  <<i<<" ";
    }cout <<"size :"<<d.size() <<endl;
    return 0;
}