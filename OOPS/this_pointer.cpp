#include <iostream>
using namespace std;
class Hero{
    public:
    int health;
    char level;
   void sethealth(int health){
       this ->health = health;
   }
   int gethealth(){
       return health;
   }
};

int main( ){
    Hero h1;
    h1.sethealth(75);
    cout <<h1.gethealth();
   h1
    
    return 0;
}