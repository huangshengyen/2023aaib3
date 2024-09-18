//week02-2b.cpp
//soit107_advance_006(c++ vision)
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
	cout << "\n";
}