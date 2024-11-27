//week12-5.cpp UVA11349
#include <iostream>
using namespace std;
int a[100][100]; //step04: array
int main()
{
	int T,N,now;
	char c, c2; //not important
	cin >> T; //step01: input
	for(int t=1; t<=T; t++){
		cin >> c >> c2 >> N; //step01: input
		for(int i = 0; i<N; i++){
			for(int j=0; j<N; j++){
				cin >> a[i][j]; //step03: for-loop input
			}//step04: array
		}
		int bad = 0;
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				if(a[i][j] != a[N-1-i][N-1-j]) bad = 1;
				if(a[i][j] < 0) bad = 1;
			} //step05: array N-1-i
		}
		if(bad==0) cout << "Test #" << t << ": Symmetric." << "\n";
		else cout << "Test #" << t << ": Non-symmetric." << "\n";
	}//step 02:output
}
