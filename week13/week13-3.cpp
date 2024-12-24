//week13-3.cpp 使用leetcode 的 playground 遊樂場 寫程式
//leetcode 把 #include <iostream> 和 using namespace std; 都寫好了
//右下角有 stdin 可以輸入資料
//輸入:
//3  4
//4  3
//2  5
//1  3
//3  9
//3  3
int main() {
    int a,b;
    vector<int> A, B;
    while( cin >> a >> b ){
        A.push_back(a); //把數字 a 放入 陣列A
        B.push_back(b); //把數字 b 放入 陣列B
    }//目標:把A從小到大排好 把B從小到大排好
    sort( A.begin(), A.end() );
    sort( B.begin(), B.end() );
    int ans = 0;
    for(int i=0; i < A.size(); i++){
        //cout << A[i] << " ";//印出來真的是小到大排好
        ans += abs( A[i] - B[i]); //相減，只取正的
    }
    cout << "加起來的答案是" << ans;
}
