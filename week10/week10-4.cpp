#include <iostream>
#include <string>
using namespace std;

class Cat{
public:
    string name;
    Cat(string _name){ ///����غc�l constructor
        name = _name;
    } ///�S��return��
    void printf(){
        cout << "My name is " << name << ".\n";
    }
};

int main()
{///�غc cat1 �M cat2 �ɡA�|�Ϋغc�l�A�⪫��غc�X��
    Cat cat1("�p��"), cat2("�p��");
    cat1.printf();
    cat2.printf();
}
