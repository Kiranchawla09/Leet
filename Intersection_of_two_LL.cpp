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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *startA= headA;
        ListNode *startB= headB;
        if (headA==NULL || headB== NULL)
            return NULL;
        unordered_set<ListNode*> st;
        while (startA!=NULL)
        {
            st.insert(startA);
            startA=startA->next;
        }
        if (st.empty())
            return NULL;
        while (startB!=NULL)
        {
            if (st.find(startB)!=st.end())
                return startB;
            startB=startB->next;
        }
        return NULL;
    }
};