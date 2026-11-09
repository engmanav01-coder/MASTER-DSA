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
    ListNode* middleNode(ListNode* head) {
        ListNode * temp = head;
        int count = 0;
        while( temp ){
            count ++;
            temp = temp -> next;
        }
        int mid = count  /2 ;
        ListNode * pre = head;
        while( mid--){
            pre = pre -> next;
        } 
        ListNode * cur = pre -> next;
        while ( cur ){
            cur = cur -> next;
            
        }
        return pre ;
    }
};