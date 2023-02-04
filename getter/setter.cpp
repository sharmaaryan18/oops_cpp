
#include<iostream>
using namespace std;

class hero {
    private:
    int health;

    public:
    char level;

    int gethealth() {
        return health;
    }
    char getlevel() {
        return level;
    }

    void sethealth(int h) {
        health=h;
    }
    void setlevel(char ch ) {
         level=ch;
    }

    
};

int main() {

    hero aryan;
    aryan.sethealth(70);
    cout<<"aryan health is  "<< aryan.gethealth() << endl;

    
}