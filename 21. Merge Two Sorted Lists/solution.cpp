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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* current;
        if (!(l1 || l2))
            return NULL;
        
        if (l1 && l2){
            if (l1->val <= l2->val){
                current = l1;
                l1 = l1->next;
            }
            else{
                current = l2;
                l2 = l2->next;
            }
        }else if (l1){
            current = l1;
            l1 = l1->next;
        }else{
            current = l2;
            l2 = l2->next;
        }
        
        ListNode* ans = current;
        while (l1 || l2){
            if (l1 && l2){
                if (l1->val <= l2->val){
                    current->next = l1;
                    l1 = l1->next;
                }
                else{
                    current->next = l2;
                    l2 = l2->next;
                }
            }
            else if (l1){
                current->next = l1;
                l1 = l1->next;
            }
            else{
                current->next = l2;
                l2 = l2->next;
            }
            current = current->next;
        }
        return ans;
    }
};