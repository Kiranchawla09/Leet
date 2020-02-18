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
        ListNode result(0);
        int n=0;
        ListNode *node= &result;
        while (l1 || l2)
        {
            int sum=0;
            if (l1)
            {
                sum+= l1->val;
                l1=l1->next;
            }
            if (l2)
            {
                sum+= l2->val;
                l2= l2->next;
            }
            sum+=n;
            n= sum/10;
            node->next= new ListNode (sum%10);
            node= node->next;
        }
         if (n) node->next = new ListNode(1);
        return result.next;
    }
};