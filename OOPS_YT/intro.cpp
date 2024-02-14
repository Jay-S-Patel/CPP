#include<iostream>
using namespace std;

class Hero{

    //properties
    private:
    int health;

    public:
    char level;


    //Default Constructor
    Hero(){
        cout<<"Constructor called"<<endl;
    }


    //Parameterized Constructor
    Hero(int health){
        // cout<< "this -> " << this <<endl;
        this -> health = health;
    }


    Hero(int health, char level){
        // cout << "Address of Here : "<< this << endl;
        this -> level = level;     
        this -> health = health;
    }


    void print(){
        cout << level << endl;
    }

    //use getter-setter to access private modifiers outside the class
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
};

int main(){

    //object created Statically
    
    // cout<<"Hi"<<endl;
    // cout<<"Hello"<<endl;
    Hero jay(10); 
    // cout<<"Address of jay : "<< &jay <<endl;
    jay.print();


    //object created Statically
    Hero *h = new Hero(11);         //Or     Hero *h = new Hero; 
    h->print();

    Hero temp(22, 'C');
    temp.print();



/*
    //creation of object

    //Static allocation
    Hero a;

    a.setHealth(70);
    a.setLevel('A');

    cout<<"level is : "<<a.level<<endl;
    cout<<"health is : "<<a.getHealth()<<endl;


    //Dynamic allocation
    Hero *b = new Hero;

    b->setHealth(80);
    b->setLevel('B');

    cout<<"level is : "<<(*b).level<<endl;            //OR  b->level
    cout<<"health is : "<<(*b).getHealth()<<endl;     //OR  b->getHealth()
*/




/*
    cout<<"h1 health is : "<<h1.getHealth() <<endl;      //in this line we will get garbage value because we have not set value yet

    //use setter
    h1.setHealth(70);

    // h1.health = 70;
    h1.level = 'A'; 

    cout<<"health is : "<<h1.getHealth() <<endl;  //But here we will get 70
    cout<<"level is : "<< h1.level <<endl;
*/  

    return 0;
}