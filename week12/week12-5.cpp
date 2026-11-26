// week12-5.cpp 學習計畫 Linked List 第4題
// 445. Add Two Numbers II 很大的數的加法, 但是 個位數 沒有對齊
class Solution {
public:
    // 把上週 week11-4.cpp 的程式, 拿來用
    ListNode* reverse(ListNode* head) { // 這行要自己寫
        // 中間用貼的 week11-1.cpp
        vector<int> a; // 伸線自如的陣列, 要把 Linked List 裡面的值 copy 到陣列
        while (head != nullptr) {
            a.push_back( head->val );
            head = head->next;
        }
        ListNode* ans = new ListNode(999);
        ListNode* now = ans;
        for (int i=a.size()-1; i>=0; i--) {
            now->next = new ListNode( a[i] );
            now = now->next;
        }
        return ans->next;
    } // 這行要自己寫
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1); // 這行要自己寫
        l2 = reverse(l2); // 這行要自己寫

        // 下面用貼的 week12-3.cpp
        ListNode* ans = new ListNode(999); // 上週教的工具1
        ListNode* now = ans; // 上週教的工具2
        int carry = 0; // 進位, week12重點
        // 新的版本, 只要還有剩任一條, 就繼續迴圈
        while ( l1 != nullptr || l2 != nullptr ) { // 把 && 改成 ||
            if (l1 != nullptr) carry += l1->val; // 如果 l1 還有, 就把 val 加進去
            if (l2 != nullptr) carry += l2->val; // 如果 l2 還有, 就把 val 加進去
            now->next = new ListNode( carry % 10 ); 
            carry = carry / 10; // 進位, week12重點
            now = now->next;
            if (l1 != nullptr) l1 = l1->next; // 如果還有, 才能換下一筆
            if (l2 != nullptr) l2 = l2->next; 
        }
        if (carry) now->next = new ListNode(carry); // 離開迴圈後, 如果還有 carry 進位, 不能漏掉
        return reverse( ans->next );  //return ans->next; // 這行要自己寫

    }
};