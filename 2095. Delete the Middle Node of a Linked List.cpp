class Solution 
{
public:
    ListNode* deleteMiddle(ListNode* head) 
    {
        if(head == nullptr)
        {
            return nullptr;
        }
        ListNode * fast = head;
        ListNode * slow = head;
        ListNode * prev = NULL;
        if(head->next == nullptr)
        {
            return nullptr;
        }
        while(fast != nullptr && fast->next!=nullptr)
        {
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }
           prev->next = slow->next;
            delete(slow);
            slow = slow->next;
            return head;
        
        


    }
};
