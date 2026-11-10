/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // ListNode *  cur = hea
        node -> val = node -> next -> val ; 
        node -> next = node -> next-> next;
        // while( cur ){
        //     if ( cur -> data == node -> data){
        //         ListNode * temp = cur ;
        //         cur  = cur -> next -> next;
        //         delete temp;
        //     }
        //     cur = cur -> next;
        // }
        // return head;
    }
};