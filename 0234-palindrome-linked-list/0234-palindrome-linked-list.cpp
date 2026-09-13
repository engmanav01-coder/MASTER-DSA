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
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return true;
        ListNode * temp = head;
        int count = 0;
        while(temp){
            count++;
            temp = temp -> next;

        }
        count /= 2;
        ListNode * cur = head ;
        ListNode * pre  = NULL;
        while(count--){
            pre = cur;
            cur = cur -> next;
        }
        pre -> next = NULL;
        ListNode * front = NULL;
        while(cur){
            front = cur -> next;
            cur -> next = pre ;
            pre = cur ;
            cur = front;
        }
        ListNode * head1 = head ;
        ListNode * head2 = pre;
        while(head1){
            if(head1->val != head2->val){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
            
        }
        return true;
    }    
};