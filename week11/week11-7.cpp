//week11-7.cpp 1502. Can Make Arithmetic Progression From Sequence
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end()); //�q�p��j�Ʀn
        int N = arr.size(); //�`�@��N�Ӽ�
        for(int i=0; i<N-2; i++){ //for�j��n�֨�ӡA�]���U����i+2
            if( arr[i]-arr[i+1] != arr[i+1]-arr[i+2]) return false;
        }
        return true;
    }
};
