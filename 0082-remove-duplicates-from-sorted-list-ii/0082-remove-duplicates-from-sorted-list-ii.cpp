class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* cur = head;

        while (cur) {

            // Duplicate mila
            if (cur->next && cur->val == cur->next->val) {

                // Same value ke saare nodes skip karo
                while (cur->next && cur->val == cur->next->val) {
                    cur = cur->next;
                }

                // Duplicate group ko remove karo
                prev->next = cur->next;
            }

            else {
                // Duplicate nahi hai
                prev = prev->next;
            }

            cur = cur->next;
        }

        return dummy->next;
    }
};