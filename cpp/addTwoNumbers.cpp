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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode  *l3,*ref;
        int i=0,value;
        int rem=0;
        while(l1 != NULL || l2!=NULL )
        {
            if(l1==NULL)
                l1= new ListNode(0);
            else if(l2==NULL)
                l2=new ListNode(0);
            int sum = rem+ l1->val + l2-> val;
          //  cout<<sum;
            rem= sum/10;
            value=sum%10;
            if(i==0){
                i++;
                //ListNode* x(value);
                l3=new ListNode(value);
                ref=l3;
            }
            else if(i==1){
                //cout<<value;
                i++;
                //ListNode* x(value);
                ref=new ListNode(value);
                l3->next=ref;
            }
            else{
                ref->next=new ListNode(value);
                ref=ref->next;
            }
            l1=l1->next;
            l2=l2->next;
            if(l1== NULL && l2==NULL && rem!=0)
            {
                l1=new ListNode(0);
                l2=new ListNode(0);
            }
        }
        return l3;
    }
};
