const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(0);
        ListNode* current = ans;
        ListNode* a = l1;
        ListNode* b = l2;
        
        int error = 0;
        
        while (a || b){
            int x = a ? a->val : 0;
            int y = b ? b->val : 0;
            int summ = error + x + y;
            error = summ / 10;
            current->next = new ListNode(summ % 10);
            current = current->next;
            if (a) a = a->next;
            if (b) b = b->next;
        }
        if (error)
            current->next = new ListNode(error);
        return ans->next;
    }
};