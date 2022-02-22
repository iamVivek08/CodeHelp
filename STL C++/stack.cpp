#include <iostream>
#include <stack>
using namespace std;
// Stack is mainly based on the LIFO ( last in first out)

int main( ){
stack <string > st;
// push in stack use for the element insertion
st.push("Vivek"); 
st.push("kumar");
st.push("Singh");

cout <<"The first element shown is :"<<st.top() <<endl ;
// Note: In the case of stack , we can see first element by using top operation
st.pop(); // deletion
cout << "After deletion , first element is :"<< st.top();
    return 0;
}