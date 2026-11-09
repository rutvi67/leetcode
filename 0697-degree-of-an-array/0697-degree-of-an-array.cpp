class Solution {
public:
    int findShortestSubArray(vector<int>& nums)
    {
        unordered_map<int,int> freq;
        unordered_map<int,int> first;
        unordered_map<int,int> last;
        int degree = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
            if(!first.count(nums[i]))
            {
                first[nums[i]] = i;
            }
            last[nums[i]] = i;
            degree =
                max(degree,
                    freq[nums[i]]);
        }
        int ans = nums.size();
        for(auto p : freq)
        {
            int num = p.first;
            if(freq[num] == degree)
            {
                ans =
                min(
                    ans,
                    last[num]
                    -
                    first[num]
                    +
                    1
                );
            }
        }
        return ans;
    }
};