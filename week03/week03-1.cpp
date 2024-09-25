///week03-1.cpp 考試題目，但是無法執行
///因為 range-based for 迴圈必須在C++11 (2011之後)才能用
///如果使用 C++98(1998年版C++) 會無法正確編譯，執行會出錯，迴圈會出錯
///codeBlocks 17.12裡 setting-compiler 勾第二個 -std=c++11
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for(char c : s){
		if(c != '2') cout << c;
	}
	cout << '\n';
}
