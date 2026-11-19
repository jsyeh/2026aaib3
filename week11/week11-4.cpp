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
// week11-4.cpp 學習計畫 Linked List 第1題
// LeetCode 21. Merge Two Sorted Lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(999);
        ListNode* now = ans;
        // 如果 左邊有值、不是空空的 右邊有值、不是空空的
        while ( list1 != nullptr && list2 != nullptr) {
            if ( list1->val < list2->val ) { // 左邊小, 用左邊
                now->next = new ListNode( list1->val );
                now = now->next;
                list1 = list1->next;
            } else { // 右邊小, 用右邊
                now->next = new ListNode( list2->val );
                now = now->next;
                list2 = list2->next;
            }
        }// 還沒有寫完, 快要寫完了 (好像需要畫圖, 才容易理解啊啊啊)
        if (list1) now->next = list1;
        if (list2) now->next = list2;
        return ans->next;
    }
};