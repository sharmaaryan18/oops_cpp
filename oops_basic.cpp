#include<iostream>
using namespace std; 

class hero {
    //properties
   
    public:
    int health;

    private:
    char level;

    void print() {
        cout<<level<<endl;
    }
     //level only be accessed within the class  

};

int main() {
    //creation of object 
    hero aryan;

    aryan.health=100;

    cout<<"Health is  "<<aryan.health<<endl;
    //cout<<"Level is  "<<aryan.level<<endl;//here level cannot be accessed
    return 0;     

}