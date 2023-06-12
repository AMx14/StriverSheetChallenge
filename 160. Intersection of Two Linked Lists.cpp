class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode * A = headA;
        ListNode * B = headB;
        if(A == NULL || B == NULL)
        {
            return NULL;
        }
        while(A != NULL && B!=NULL && A!=B)
        {
            A = A->next;
            B = B->next;
            if(A == B )
            {
                return A;
            }
            
            if(A==NULL)
            {
                A=headB;
            }
            if(B==NULL)
            {
                B=headA;
            }
            
        }
        return A;
    }
};
