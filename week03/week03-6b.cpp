//week03-6b.cpp soit106_advance_012
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a;
	int now;
	while(true){//can write: while(1)
		cin >> now;
		if(now == 0) break;
		a.push_back(now);
	}
	cin >> now;
	int ans = 0;
	for(int num : a){ //remember:complier: MSVC, NOT codeblocks
		if(num == now) ans++;
	}
	cout << ans << endl; //endl = End of Line
}
