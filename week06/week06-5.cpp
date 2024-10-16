//week06-5.cpp leetcode 1078. Occurrences After Bigram
//���C�@�Ӧr�A���ۧ�ĤG�Ӧr�A�A�ӴN�O�ڭ̭n���ĤT�Ӧr
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans; //�񵪮�(���Y�ۦp���}�C)�A�Ϊ� �n return �@��

        stringstream ss(text); // ��string �ন�� cin cout ��stream

        string word1, word2, word3; //��1�B��2�B��3�Ӧr
        ss >> word1; // �� cin >> word1����k�AŪ����
        ss >> word2;
        while(ss >> word3){
            if(word1 == first && word2 == second) ans.push_back(word3);
            word1 = word2;
            word2 = word3;
        }
        return ans;
    }
};
