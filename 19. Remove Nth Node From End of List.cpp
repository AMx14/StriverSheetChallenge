class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        for(int i = 0; i<n; i++)
        {
            fast = fast->next;
        }
        
        if(!fast)
        {
            ListNode* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
            return head;
        }
        while(fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        ListNode * temp = slow->next;
        slow->next = slow->next->next;
        temp->next = NULL;
        delete temp;
        
        return head;
        
        
    }
};
