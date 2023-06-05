class Solution {
public:
    int maxDepth(string s) 
    {
        int count = 0;
        int maxCount = 0;
        
                for(int j = 0; j<s.size(); j++)
                {
                    if(s[j] == '(')
                    {
                        count++;
                        maxCount = max(maxCount,count);
                    }

                    else if(s[j]== ')')
                    {
                        count--;
                        maxCount = max(maxCount,count);
                    }

                }
                return maxCount;
           

    }
};
