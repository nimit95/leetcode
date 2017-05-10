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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode* node = new ListNode(0);
        ListNode* p1 = node;
        while(head!=NULL) {
            if(head->next==NULL||head->val!=head->next->val){ node->next = head;node=node->next;}
            while(head->next!=NULL && head->val==head->next->val)
                head=head->next;
            if(head==NULL)
                break;
            head = head->next;
        }
        node->next = NULL;
        return p1->next;
    }
};
