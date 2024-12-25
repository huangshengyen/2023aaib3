//week14-4.cpp
#include <iostream>
using namespace std;
int main()
{
	int a,b; //step01: Input
	while(cin >> a >> b){
		while(a>0){ //Step03
			cout << a << " ";
			a = a/b;
		}
		cout << "Boring!\n"; //Step02:Output
	}
}
