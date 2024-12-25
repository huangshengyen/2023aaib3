//week14-5.cpp
#include <iostream>
using namespace std;
int main()
{
	int a,b; //step01: Input
	while(cin >> a >> b){
		if(b==1){
			cout << "Boring!\n";
			continue; //Step06
		}
		int bad = 0, backup = a; //Step04:
		while(a>0){ //Step03: Testing bad
			//cout << a << " ";
			if(a!=1 && a%b > 0) bad = 1;
			a = a/b;
		}
		if(bad==1) cout << "Boring!\n";
		else{
			a = backup;
			while(a>1){//Step05
				cout << a << " ";
				a = a/b;
			}
			cout << "1\n";
		}//Step02: Output
	}
}
