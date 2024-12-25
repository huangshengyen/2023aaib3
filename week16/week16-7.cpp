//week16-7.cpp leetcode �C��D���D 515. Find Largest Value in Each Tree Row
//���𪺨C�@�h���̤j��
class Solution {
public:
    void helper(TreeNode* root, int level, vector<int>& ans){
        if(root==nullptr) return;
        if(ans.size() <= level) ans.push_back(root->val); //��l�����A�N�[�@��
        else if(root->val > ans[level]) ans[level] = root->val; //�p�G�Ʀr��j�A�N��s
        helper(root->left, level+1, ans); //���b��(�U�@�h level+1)
        helper(root->right, level+1, ans); //�k�b��(�U�@�h level+1)
    }
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        helper(root, 0, ans);
        return ans;
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
