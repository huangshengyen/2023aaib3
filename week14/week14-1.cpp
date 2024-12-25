// week14-1.cpp 學習計畫 2. Add Two Numbers (寫到一半、簡單版本)

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * ans = new ListNode();
        ListNode * now = ans; //模仿前兩題的寫法
        while( l1 != nullptr){ //只針對其中一個 list1
            now -> next = new ListNode(l1 -> val); //建立新的 node
            l1 = l1 -> next; //下一筆
            now = now -> next; //下一筆
        }
        return ans -> next; //等一下要 return ans -> next
    }
};
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
