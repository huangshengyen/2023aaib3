///week10-3.cpp �n�m�� class ��ܦh���
#include <iostream>
#include <string>
using namespace std;

class Cat{
public:
    string name; ///��ơB�ݩ�
    void printf(){ ///�禡�B��k
        cout << "I am a cat. My name is " << name << ".\n";
    }
};

int main()
{
    Cat cat1,cat2;
    cat1.name = "�p��";
    cat1.printf();
    cat2.name = "�p��";
    cat2.printf();
}
