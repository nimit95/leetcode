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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode* node = new ListNode(0);
        node->next = head;
        head = node;
        while(node->next!=NULL&&node->next->next!=NULL){
            ListNode* temp = node->next->next->next;
            node->next->next->next = node->next;
            node->next = node->next->next;
            node -> next->next->next = temp;
            node = node->next->next;
        }
        return head->next;
    }
};
