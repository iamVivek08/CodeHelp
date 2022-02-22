#include <iostream>
#include <array>
using namespace std;

int main( ){
    array<int,5> a ={ 2, 4, 5 ,3,7}; // creating array <datatype  , size > variable name
   /* int n = a.size();
    for ( int i =0 ; i< n ; i++){
        cout << a[i] <<" ";
    }*/
    // cout << a.at(2); // at tell the element at the particular index
    // cout << a.empty(); // tells whether empty or not

// front->first element , back -> last element 
    cout << a.front( ) << " "<<a.back();
    return 0;
}