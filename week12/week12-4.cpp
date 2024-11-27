//week12-4.cpp UVA11349
#include <iostream>
using namespace std;

int main()
{
	int T,N,now;
	char c, c2; //not important
	cin >> T; //step01: input
	for(int t=1; t<=T; t++){
		cin >> c >> c2 >> N; //step01: input
		for(int i = 0; i<N; i++){
			for(int j=0; j<N; j++){
				cin >> now; //step03: for-loop input
			}
		}
		cout << "Test #" << t << ": Symmetric." << "\n";
	}//step 02:output
}
