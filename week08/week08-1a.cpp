//week08-1a.cpp 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0; //�̦h���������H�A���u�h�ֿ��v?
        for(auto a : accounts){ //�q�@��H�A��X1�ӤH a
            int sum = 0;//�j��e���Asum = 0
            for(auto b : a){ //a[0]+a[1]+a[2]+......
                sum += b; //�j�餤�� sum += b �V�[�V�h
            } //�j��᭱�A�ݳo�ӤH���s���`�ơA�O�_�󦳿�
            if(sum > ans) ans = sum; //�󦳿��A�N��sans
        }
        return ans;//�j��᭱ ans���ӥ�
    }
};
