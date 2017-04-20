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
    ListNode* rotateRight(ListNode* head, int k) {
        int len=0;
        if(head==NULL)
            return NULL;
        ListNode* slow=head, *fast = head;
        while(fast!=NULL){
            fast = fast->next;
            len++;
        }
        k=k%len;
        len=0;
        fast = head;
        while(fast->next!=NULL)
        {
            fast = fast->next;
            if(len>=k)
                slow = slow->next;
            len++;
        }
        if(k%(len+1)==0)
            return head;
        fast->next = head;
        head = slow->next;
        slow->next = NULL;
        return head;
    }
};
