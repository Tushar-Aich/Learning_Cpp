#include <iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char level;

    //Constructor
    Hero(){
        cout << "Constructor called" << endl;
    }

    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }

    int getHealth(){
        return health;
    }
    char getlevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char lv){
        level = lv;
    }

    void print(){
        cout << "Health :: " << this -> health << endl;
        cout << "Level :: " << this -> level << endl;
    }
};

int main()
{
    //Dynamic allocation
    Hero *Tushar = new Hero; //Memory aallocated in heap

    Tushar->setLevel('A');
    Tushar->setHealth(80);

    // cout << "Health :: " << (*Tushar).getHealth() << endl;
    // cout << "Level :: " << (*Tushar).level << endl;
    
    //Alternate method of accessing
    cout << "Health :: " << Tushar->getHealth() << endl;
    cout << "Level :: " << Tushar->level << endl;

    //Copy constructor
    Hero a(30, 'A');
    a.print();

    Hero b(a);
    b.print();


    /*
    Hero Tushar;
    cout << "Size : " << sizeof(Tushar) << endl;

    // Tushar.health = 20;
    Tushar.setHealth(50);
    Tushar.level = 'A';

    cout << "Health :: " << Tushar.getHealth() << endl;
    cout << "Level :: " << Tushar.level << endl;

    */
    return 0;
}