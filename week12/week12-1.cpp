///week12-1.cpp 學習資料結構的 struct VS Class
#include <iostream>
using namespace std;

///struct Node {}; ///都有分號結尾 C語言的結構
///class Cat {}; ///之前幾周都教過，更強大
struct Node{
    int val; ///value縮寫，這個Node裡面的值
};
class Cat{
public:
    string name; ///貓的名字，之前幾周教過
};
int main()
{
    Cat cat1;
    cat1.name = "cattie";
    Node node;
    node.val = 1;
}
