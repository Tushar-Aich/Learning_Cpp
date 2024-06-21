#include<iostream>
using namespace std;

class Human{

    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this-> age;
    }
    void setWeight(int w){
        this-> weight = w;
    }
};

class Male : public Human{
    public:
    string color;

    void sleep(){
        cout<< "Male Sleeping" << endl;
    }
};

int main(){

    Male Obj1;
    cout<< Obj1.age << endl;
    cout<< Obj1.height << endl;
    cout<< Obj1.weight << endl;

    cout<< Obj1.color << endl;
    Obj1.setWeight(52);
    cout<< Obj1.weight << endl;
    Obj1.sleep();

    return 0;
}