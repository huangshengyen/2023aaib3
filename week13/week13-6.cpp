// week13-6.cpp 學習計畫 linked list 第二題
// leetcode 206. Reverse Linked List
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a; //用陣列，存 Linked List 的 val 值
        while( head != nullptr){ //只要還有東西
            a.push_back(head->val); //就把值塞入陣列
            head = head->next; //換下一個
        }
        ListNode * ans = new ListNode(); //和前一題一樣
        ListNode * now = ans; //和前一題一樣
        for(int i=a.size()-1; i>=0; i--){ //反過來的陣列
            now->next = new ListNode(a[i]);
            now = now->next; //換下一個
        }
        return ans->next; //和前一題一樣
    }
};
