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
    
    ListNode* reverseBetween(ListNode* head, int m, int n) {
      ListNode* cur=head;
        ListNode* prev=NULL;
        ListNode* next;
        ListNode* first=NULL;
        ListNode* second=NULL;
        int c=1;
        if(m==n)
        {
            return head;
        }
        while(c<=n)
        {
            if(c>=m)
            {
                next=cur->next;
                cur->next=prev;
                prev=cur;
                cur=next;
            }
            else
            {
                first=cur;
                cur=cur->next;
            }
            c++;
        }
        if(first==NULL && cur==NULL)
        {
            return prev;
        }
        if(first==NULL && cur!=NULL)
        {
            head->next=cur;
            return prev;
        }
        else
        {
        second=first->next;
        second->next=cur;
        first->next=prev;
        }  
        return head;
        
    }
};