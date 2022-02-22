#include <iostream>
#include <queue>
using namespace std;
// queue is based on FIFO ( first in first out)
int main( ){
    queue <string> q;
    q.push("Vivek");
    q.push("Kumar");
    q.push("Singh");

    cout << "The first element shown is : " << q.front()<<endl;
    q.pop();
    cout <<"After deletion , element is :" <<q.front();
    return 0;
}