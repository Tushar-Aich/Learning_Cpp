#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
        int height;
    public:
        int getage(){
            return this->age;
        }
};

int main()
{
    Student s1;
    cout << "Everything OK!" << endl;
    return 0;
}