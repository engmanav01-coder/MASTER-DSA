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
    int getlen( ListNode * head ){
        int count = 0 ;
        while( head)
        {
            head = head -> next;
            count++;
        }
        return count ;
    }
    ListNode* reverseKGroupUntill(ListNode* head, const int &k, int count  ) {
        if(count < k ){
            return head;
        }
        int x = 0;
        ListNode * cur = head;
        ListNode * pre = nullptr;
        ListNode * next = nullptr;
        while( cur != nullptr && x<k)
        {
            next = cur -> next ;
            cur -> next = pre ;
            pre = cur ;
            cur = next;
            x ++;
        }
        head -> next = reverseKGroupUntill(next , k ,count - x);
        return pre;
    }
    ListNode * reverseKGroup(ListNode * head, int k ){
        int len = getlen(head);
        return reverseKGroupUntill( head , k ,len );
    }
};