Method 1:


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* start= head;
        return reverse(NULL,head);
    }
    ListNode* reverse (ListNode*ptr, ListNode*start)
    {
        if (start==NULL)
            return ptr;
       ListNode*temp= start->next;
       start->next=ptr;
       return reverse(start,temp);
    }
};

Method 2:


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev= NULL;
       
        while (head)
        {
            ListNode* nextnode= head->next;
            head->next= prev;
            prev= head;
            head=nextnode;
        }
       return prev;        
    }
};