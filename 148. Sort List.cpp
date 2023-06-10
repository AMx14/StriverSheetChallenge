class Solution 
{
public:
    ListNode* sortList(ListNode* head) 
    {
        ios_base::sync_with_stdio(false);  
        cin.tie(nullptr);
        if(head == nullptr)
        {
            return nullptr;
        }

        if(head->next == nullptr)
        {
            return head;
        }
        ListNode* curr = head;
        
        vector<int> copy;
        while(curr!=nullptr)
        {
            copy.push_back(curr->val);
            curr = curr->next;    
        }
        sort(copy.begin(),copy.end());
        curr = head;
        int index = 0;
        while(curr != nullptr)
        {
            curr->val = copy[index];
            curr = curr->next;
            index++;
        }
        return head;
    }
};
