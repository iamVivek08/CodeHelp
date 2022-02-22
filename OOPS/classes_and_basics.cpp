#include <iostream>
using namespace std;

// set() and get() function are used to get input(also set condition) from the user and read the private members data resp;
class Hero{

    private:
    int health;
    public:
    int level;
    
    int gethealth(){
        return health ;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health = h;
    }
    void setlevel(char c){
        level = c;
    }
};

int main ( ){

Hero ramesh;
ramesh.sethealth(1);
ramesh.setlevel('A');
cout <<"Ramesh health is : "<<ramesh.gethealth()<<endl;
cout <<"Ramesh level is : "<<ramesh.getlevel();

return 0;    
}