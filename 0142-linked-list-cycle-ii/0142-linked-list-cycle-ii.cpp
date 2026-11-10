class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        ListNode *slow = head;
        ListNode *fast = head;

        // Phase 1: Detect cycle
        while (fast && fast->next) {

            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                break;
            }
        }

        // No cycle
        if (fast == nullptr || fast->next == nullptr) {
            return nullptr;
        }

        // Phase 2: Find cycle starting point
        slow = head;

        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
    }
};