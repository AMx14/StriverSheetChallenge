class Solution {
public:
    int beautySum(string s) 
    {
        int ans = 0;
        for(int i =0; i<s.size(); i++)
        {
            unordered_map<char,int> mp;
            for(int j = i; j<s.size(); j++)
            {
                mp[s[j]]++;

                int minn = INT_MAX;
                int maxx = INT_MIN;
                for(auto i : mp)
                {
                    maxx = max(i.second,maxx);
                    minn = min(i.second,minn);
                    
                }
                ans+= maxx-minn;
            }
        }
        return ans;
    }
};
