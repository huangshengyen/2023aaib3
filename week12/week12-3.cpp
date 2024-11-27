//week12-2.cpp leetcode 21. Merge Two Sorted Lists
class Solution {
public: //*代表指標，老師把它叫做用來瞄準的準星
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(); //空包彈
        ListNode* now = ans; //答案放在 now 裡面
        while(list1 != nullptr || list2 != nullptr){ //只要任何一邊還有資料，就繼續做
            if(list1==nullptr){//有一個是空的
                now->next = list2; //另外一個全部都上
                list2 = nullptr; //清空
            }
            else if(list2==nullptr){ //有一個是空的
                now->next = list1; //另外一個全部都上
                list1 = nullptr;
            }
            else if(list1->val < list2->val){ //list1是小的
                now->next= new ListNode(list1->val); //答案放在 now 的下一筆，放小的
                list1 = list1->next;//list1 換下一筆
                now = now->next; //現在也換下一筆
            }
            else{ //list2是小的
                now->next = new ListNode(list2->val); //答案放在 now 的下一筆，放小的
                list2 = list2->next;//list1 換下一筆
                now = now->next; //現在也換下一筆
            }
        }
        return ans->next;
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
