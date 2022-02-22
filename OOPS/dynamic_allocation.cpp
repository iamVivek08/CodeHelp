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
// static allocation
Hero ramesh;
ramesh.sethealth(100);
ramesh.setlevel('A');
cout <<"Ramesh health is : "<<ramesh.gethealth()<<endl;
cout <<"Ramesh level is : "<<ramesh.getlevel()<<endl;
// dynamic allocation with pointer
Hero *h = new Hero;
(*h).sethealth(67);
(*h).setlevel('D');
cout <<"Rahul health is : "<<(*h).gethealth()<<endl;
cout <<"Rahul level is : "<<(*h).getlevel();
return 0;    
}