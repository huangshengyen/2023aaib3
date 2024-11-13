///week10-3.cpp 要練習 class 放很多資料
#include <iostream>
#include <string>
using namespace std;

class Cat{
public:
    string name; ///資料、屬性
    void printf(){ ///函式、方法
        cout << "I am a cat. My name is " << name << ".\n";
    }
};

int main()
{
    Cat cat1,cat2;
    cat1.name = "小花";
    cat1.printf();
    cat2.name = "小白";
    cat2.printf();
}
