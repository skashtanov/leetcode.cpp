/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        while (head && !head->val)
            head = head->next;
        
        if (!head)
            return 0;
        
        int num = head->val;
        head = head->next;
        if (num)
            while (head){
                num <<= 1;
                num |= head->val;
                head = head->next;
            }
        return num;
    }
};