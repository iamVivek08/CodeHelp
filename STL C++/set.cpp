#include <iostream>
#include <set>
// set stored duplicate element only once and element are in sorted
using namespace std;

int main ( ){
    set <int> s;
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(4);

    for ( auto i : s){
        cout << i <<endl;
    } cout <<endl;
    s.erase(s.begin( )+2);
     for ( auto i : s){
        cout << i <<endl;
    }
    return 0;
}