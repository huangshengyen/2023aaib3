//week10-5.cpp leetcode �ǲ߭p�e 976. Largest Perimeter Triangle
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end()); //�p��j�Ʀn
        int N = nums.size();
        for(int i=0; i<N-2; i++){
            int big = nums[N-1-i], middle = nums[N-2-i], small = nums[N-3-i];
            if(middle+small > big) return big + middle + small;
        }
        return 0; //�ثe�����׬O����
    }
};
