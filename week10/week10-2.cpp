///week10-2.cpp ½m²ß class

#include <iostream>
using namespace std;

class Mouse{
public:
    void printf(){
        cout << "I am a mouse, ÁûÁû\n";
    }
};

class Cat{
public:
    void printf(){
        cout << "I am a cat, meow meow\n";
    }
};
int main()
{
    Mouse mouse1,mouse2;
    Cat cat1,cat2;
    mouse1.printf();
    mouse2.printf();
    cat1.printf();
    cat2.printf();
}
