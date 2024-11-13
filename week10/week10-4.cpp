#include <iostream>
#include <string>
using namespace std;

class Cat{
public:
    string name;
    Cat(string _name){ ///物件建構子 constructor
        name = _name;
    } ///沒有return值
    void printf(){
        cout << "My name is " << name << ".\n";
    }
};

int main()
{///建構 cat1 和 cat2 時，會用建構子，把物件建構出來
    Cat cat1("小白"), cat2("小花");
    cat1.printf();
    cat2.printf();
}
