//week05-1.cpp soit106_advance_004
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for(char c : s){
		if(isupper(c)) c = tolower(c);
		else if(islower(c)) c = toupper(c);
		cout << c;
	}
	cout << "\n";
}