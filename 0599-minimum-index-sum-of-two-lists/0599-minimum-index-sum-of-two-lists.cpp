class Solution {
public:
    vector<string> findRestaurant( vector<string>& list1,vector<string>& list2)
    {unordered_map<string,int> mp;
        for(int i = 0; i < list1.size(); i++)
        {
            mp[list1[i]] = i;
        }
        int mini = INT_MAX;
        vector<string> ans;
        for(int i = 0; i < list2.size(); i++)
        {
            if(mp.count(list2[i]))
            {
                int sum =
                    mp[list2[i]] + i;

                if(sum < mini)
                {
                    mini = sum;

                    ans.clear();

                    ans.push_back(list2[i]);
                }
                else if(sum == mini)
                {
                    ans.push_back(list2[i]);
                }
            }
        }
        return ans;
    }
};