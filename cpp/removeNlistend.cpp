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
    ListNode* removeNthFromEnd(ListNode *head, int n) {
        int i=0;
        ListNode * temp=head,*p=head;
        while(temp->next != NULL)
        {
            i++;
            temp=temp->next;
            if(i>n)
                p=p->next;
        }
        cout<<p->val;
        if(n==1 && p==head && i>=1)
            p->next=NULL;
        else if(p==head && i+1==n)
            head=p->next;
        else if(p->next!=NULL)
            p->next=(p->next)->next;
       // else if(n==2)

        else
            head=NULL;
        return head;
    }
};
