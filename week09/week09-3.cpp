//week09-3.cpp leetcode 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end()); //�q�p��j�Ʀn
        double total = 0; //�����A���p���I
        for(int i=1; i<salary.size()-1; i++){
            //�׶}�̤psalary[0]�B�̤jsalary[N-1]
            total += salary[i];
        }
        return total / (salary.size()-2);
    }
};
