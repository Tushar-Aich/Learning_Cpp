#include <iostream>
using namespace std;

class Human {
    public:
        int height;
        int weight;
        int age;
    public:
        int getage(){
            return this->age;
        }
        int setWeight(int w){
            this->weight = w;
        }
};

class Male : public Human{
	public:
        string color;
    void sleep(){
        cout  << "Male is sleeping" << endl;
    }
};


int main()
{
    Male obj1;
    obj1.age = 17;
    obj1.height = 5;
    obj1.weight = 52;
    obj1.color = "brown";

    cout << obj1.age << endl << obj1.height << endl << obj1.weight << endl << obj1.color << endl;
    obj1.sleep();
    return 0;
}