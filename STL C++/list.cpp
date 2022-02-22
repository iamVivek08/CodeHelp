#include <iostream>
#include <list>
using namespace std;
/*list is a type of doubly linked list which allocates non contagious memory means we can not check element index using previous operation done in array , deque, vector .*/

int main( ){
     list <int > l;
     l.push_back(2);
     l.push_front(1);
     for( int i : l){
         cout <<i<<" ";
     }
    //  cout <<l.at(1); we cannot access position because it is not linked with any pointer

    return 0;
}